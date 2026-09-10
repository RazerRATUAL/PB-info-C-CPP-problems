#include <fstream>
#include <vector>
#include <list>

using namespace std;
ifstream fin ("dmin2.in");
ofstream fout ("dmin2.out");

const int nMAX = 100;
const int qMAX = 100;

int n, m, q;
vector<int> gf[nMAX + 1];
int viz[nMAX + 1];

void dfs(int nod, int fil)
{
   viz[nod] = fil;

   for (int nex : gf[nod])
      if (!viz[nex] || fil+1 < viz[nex])
         dfs(nex, fil+1);
}

int main()
{
   fin >> n >> m;
   for (int i = 1; i <= m; ++i)
   {
      int a, b;
      fin >> a >> b;
      gf[a].push_back(b);
   }

   fin >> q;
   while (q--)
   {
      int a, b;
      fin >> a >> b;

      fill(viz + 1, viz + n+1, 0);

      dfs(a, 1);
      fout << (!viz[b] ? -1 : viz[b]-1) << '\n';
   }
}