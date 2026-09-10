#include <iostream>
#include <vector>

#define mp make_pair
#define mt make_tuple
#define ll long long
#define pb push_back
#define fi first
#define se second
using namespace std;

const int nMAX = 100;

int n;
bool gf[nMAX + 1][nMAX + 1];
vector<int> stiv;
bool pus[nMAX + 1];


bool dfs(int nod)
{
   pus[nod] = 1;
   stiv.push_back(nod);
   if (stiv.size() == n)
      return true;
   
   for (int nex = 1; nex <= n; ++nex)
      if (gf[nod][nex] && !pus[nex])
         if (dfs(nex))
            return true;

   pus[nod] = 0;
   stiv.pop_back();
   return false;
}


int main()
{
   cin.tie(0)->sync_with_stdio(0);
   
   cin >> n;
   for (int i = 1; i <= n*(n-1)/2; ++i)
   {
      int a, b;
      cin >> a >> b;
      gf[a][b] = 1;
   }

   dfs(1);

   for (int nod : stiv)
      cout << nod << ' ';
}