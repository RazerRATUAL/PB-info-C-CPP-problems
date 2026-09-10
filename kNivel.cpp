#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream fin ("knivel.in");
ofstream fout ("knivel.out");

const int nMAX = 100;

int n, k;
int tat[nMAX + 1];
vector<int> fii[nMAX + 1];
vector<int> nivk;

void Dfs(int nod, int niv)
{
   if (niv == k)
   {
      nivk.push_back(nod);
      return;
   }

   for (int fiu : fii[nod])
      Dfs(fiu, niv+1);
}

int main()
{
   fin >> n >> k;
   for (int i = 1; i <= n; ++i)
   {
      fin >> tat[i];
      fii[tat[i]].push_back(i);
   }

   Dfs(fii[0][0], 1);
   sort(nivk.begin(), nivk.end());

   for (int nod : nivk)
      fout << nod << ' ';
}
