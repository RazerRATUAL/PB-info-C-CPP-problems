#include <fstream>
#include <bitset>

using namespace std;
ifstream fin ("subgraf.in");
ofstream fout ("subgraf.out");

const int nMAX = 100;

int n;
bitset<nMAX + 1> gf[nMAX + 1];


bool prim(int x)
{
   if (x <= 1)
      return false;
   
   for (int i = 2; i*i <= x; ++i)
      if (x % i == 0)
         return false;
   return true;
}


int main()
{
   int x, y, i, j;
   fin >> n;

   while (fin >> x >> y)
      gf[x][y] = gf[y][x] = 1;

   for (i = 1; i <= n; ++i)
      if (prim(i))
         for (j = 1; j <= n; ++j)
            gf[i][j] = gf[j][i] = 0;

   int muchii = 0;
   for (i = 1; i <= n; ++i)
      for (j = i+1; j <= n; ++j)
         if (gf[i][j])
            muchii ++;

   fout << muchii;
}