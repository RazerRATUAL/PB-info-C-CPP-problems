#include <iostream>
using namespace std;

const int nMAX = 100;

int n, m;
bool mc[nMAX + 1][nMAX + 1];

int main()
{
   cin >> n >> m;
   for (int i = 1; i <= m; ++i)
   {
      int a, b;
      cin >> a >> b;
      mc[a][b] = 1;
   }

   for (int k = 1; k <= n; ++k)
      for (int i = 1; i <= n; ++i)
         for (int j = 1; j <= n; ++j)
            mc[i][j] |= (mc[i][k] & mc[k][j]);
   
   for (int i = 1; i <= n; ++i, cout << '\n')
      for (int j = 1; j <= n; ++j)
         cout << mc[i][j] << ' ';
}