#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

const int nMAX = 100;

int n, m;
int gradExt[nMAX + 1];
int gradInt[nMAX + 1];

int main()
{
   int x, y;
   cin >> n >> m;

   for (int i = 1; i <= m; ++i)
   {
      cin >> x >> y;
      gradExt[x] ++;
      gradInt[y] ++;
   }

   bool exista = false;
   for (int i = 1; i <= n; ++i)
      if (gradExt[i] != 0 && gradInt[i] != 0)
         if (gradExt[i] % gradInt[i] == 0 || gradInt[i] % gradExt[i] == 0)
         {
            cout << i << ' ';
            exista = true;
         }

   if (!exista)
      cout << "NU EXISTA";
}