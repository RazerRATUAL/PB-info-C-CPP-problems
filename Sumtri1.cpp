#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin ("sumtri1.in");
ofstream fout ("sumtri1.out");

const int nMAX = 100;

int n;
int mat[nMAX + 1][nMAX + 1];
int sum[nMAX + 1][nMAX + 1];

void reconstruct(int i, int j)
{
   if (i == 1)
   {
      fout << mat[1][1] << ' ';
      return;
   }

   if (i == j)
      reconstruct(i-1, j-1);
   else if (j == 1)
      reconstruct(i-1, j);
   else if (sum[i-1][j-1] < sum[i-1][j])
      reconstruct(i-1, j-1);
   else if (sum[i-1][j-1] > sum[i-1][j])
      reconstruct(i-1, j);
   fout << mat[i][j] << ' ';
}

int main()
{
   int i, j;
   fin >> n;

   for (i = 1; i <= n; ++i)
      for (j = 1; j <= i; ++j)
         fin >> mat[i][j];

   sum[1][1] = mat[1][1];
   for (i = 2; i <= n; ++i)
   {
      sum[i][1] = sum[i-1][1] + mat[i][1];
      for (j = 2; j < i; ++j)
         sum[i][j] = min(sum[i-1][j-1], sum[i-1][j]) + mat[i][j];
      sum[i][i] = sum[i-1][i-1] + mat[i][i];
   }

   int *minsum = min_element(sum[n] + 1, sum[n] + n+1);
   fout << *minsum << '\n';
   reconstruct(n, minsum - sum[n]);
}