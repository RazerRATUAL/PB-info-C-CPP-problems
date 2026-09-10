#include <bits/stdc++.h>
using namespace std;

const int nMAX = 100e3;

int n, m;
int grad[nMAX + 1];
set<int> grzero;
vector<int> gf[nMAX + 1];

int main()
{
   cin >> n >> m;

   for (int i = 1; i <= m; ++i)
   {
      int x, y;
      cin >> x >> y;
      gf[x].push_back(y);
      grad[y] ++;
   }

   for (int i = 1; i <= n; ++i)
      if (grad[i] == 0)
         grzero.insert(i);

   while (!grzero.empty())
   {
      int nod = *grzero.begin();
      cout << nod << ' ';

      grzero.erase(grzero.begin());
      for (int nex : gf[nod])
      {
         grad[nex] --;
         if (grad[nex] == 0)
            grzero.insert(nex);
      }
   }
}