#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

const int nMAX = 100;

int n, m;
bool gf[nMAX + 1][nMAX + 1];

int main()
{
   cin >> n >> m;
   for (int i = 1; i <= m; ++i)
   {
      int a, b;
      cin >> a >> b;
      gf[a][b] = gf[b][a] = 1;
   }

   for (int i = 1; i <= n; ++i)
      for (int j = 1; j <= n; ++j)
         if (i != j)
            for (int h = 1; h <= n; ++h)
               if (gf[i][j] && gf[j][h] && gf[h][i])
                  cout << i << ' ' << j << ' ' << h << '\n';
}