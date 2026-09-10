#include <fstream>
#include <climits>
#include <algorithm>
using namespace std;
ifstream fin ("roy-floyd.in");
ofstream fout ("roy-floyd.out");

const int nMAX = 100;

int n, m;
int costmin[nMAX + 1][nMAX + 1];
int gf[nMAX + 1][nMAX + 1];

void Roy();

int main()
{
   int i, j, c;
   fin >> n >> m;
   fill(gf[0], gf[nMAX + 1], INT_MAX/2);

   while (m--)
   {
      fin >> i >> j >> c;
      gf[i][j] = c;
   }

   Roy();
   for (i = 1; i <= n; ++i, fout << '\n')
      for (j = 1; j <= n; ++j)
         fout << (costmin[i][j] >= INT_MAX/2 ? -1 : costmin[i][j]) << ' ';
}

void Roy(){
   copy(gf[0], gf[nMAX + 1], costmin[0]);
   int i, j, k;
   for (i = 1; i <= n; ++i)
      costmin[i][i] = 0;

   for (k = 1; k <= n; ++k)
      for (i = 1; i <= n; ++i)
         for (j = 1; j <= n; ++j)
            if (costmin[i][k] != -1 && costmin[k][j] != -1)
               costmin[i][j] = min(costmin[i][j], costmin[i][k] + costmin[k][j]);
}
