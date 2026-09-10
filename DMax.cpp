#include <fstream>
#include <vector>

using namespace std;
ifstream fin ("dmax.in");
ofstream fout ("dmax.out");

const int nMAX = 100;

int n, m;
vector<int> gf[nMAX + 1];
int d[nMAX + 1];

void dfs(int nod)
{
   for (int nex : gf[nod])
      if (d[nod] + 1 < d[nex])
      {
         d[nex] = d[nod] + 1;
         dfs(nex);
      }
}


int main()
{
   fin >> n >> m;
   for (int i = 1; i <= m; ++i)
   {
      int a, b;
      fin >> a >> b;
      gf[a].push_back(b);
      gf[b].push_back(a);
   }

   d[1] = 0;
   fill(d + 2, d + n+1, INT_MAX-1);
   dfs(1);

   int lungmax = 0, nodmax;
   for (int i = 2; i <= n; ++i)
      if (d[i] > lungmax)
      {
         nodmax = i;
         lungmax = d[i];
      }
   
   fout << nodmax;
}