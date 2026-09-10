#include <vector>
#include <iostream>
#include <numeric>
using namespace std;

const int nMAX = 100;

int n, m;
vector<int> gf[nMAX + 1];
bool viz[nMAX + 1];

void dfs(int nod)
{
   viz[nod] = 1;

   for (int nex : gf[nod])
      if (!viz[nex])
         dfs(nex);
}

int main()
{
   cin >> n >> m;
   for (int i = 1; i <= m; ++i)
   {
      int a, b;
      cin >> a >> b;
      gf[a].push_back(b);
   }
   
   for (int i = 1; i <= n; ++i)
   {
      fill(viz + 1, viz + n+1, 0);
      dfs(i);
      if (accumulate(viz + 1, viz + n+1, 0) >= n-1)
         cout << i << ' ';
   }
}