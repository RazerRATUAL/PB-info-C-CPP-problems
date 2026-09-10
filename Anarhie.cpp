#include <fstream>
#include <vector>
using namespace std;
ifstream fin ("anarhie.in");
ofstream fout ("anarhie.out");

const int nMAX = 100;
const int mMAX = nMAX * (nMAX-1);
const int kMAX = 10;

int n, m, k, p, q;
int sind;   bool Sind[kMAX + 1];
int SindCntMIN = INT_MAX>>1;
vector<pair<int, int>> gf[nMAX + 1];

bool viz[nMAX + 1];
bool dfs(int nod)
{
   if (nod == q)
      return true;
   viz[nod] = 1;

   bool yes = false;
   for (pair<int, int> nex : gf[nod])
      if (Sind[nex.second] == 1 && !viz[nex.first])
         yes |= dfs(nex.first);

   // return yes;
}


int main()
{
   fin >> n >> m >> k >> p >> q;

   for (int i = 1; i <= m; ++i)
   {
      int x, y, s;
      fin >> x >> y >> s;
      gf[x].emplace_back(y, s);
   }

   for (sind = 1; sind < (1<<k); ++sind)
   {
      for (int i = k; i >= 1; --i)
      {
         if (sind & (1 << (k-i)))
            Sind[i] = 1;
         else
            Sind[i] = 0;
      }

      fill(viz + 1, viz + n+1, 0);
      if (dfs(p))
         SindCntMIN = min(SindCntMIN, __builtin_popcount(sind));
   }

   fout << SindCntMIN;
}