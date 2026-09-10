#include <vector>
#include <fstream>
#include <iostream>
using namespace std;
ifstream fin ("lantminim.in");
ofstream fout ("lantminim.out");

const int nMAX = 100;

int n, p, q;
bool gf[nMAX + 1][nMAX + 1];
int lung[nMAX + 1];
int ant[nMAX + 1];

void dfs(int nod)
{
   for (int i = 1; i <= n; ++i)
      if (gf[nod][i] && lung[nod] + 1 < lung[i])
      {
         lung[i] = lung[nod] + 1;
         ant[i] = nod;
         dfs(i);
      }
}

int main()
{
   fin >> n >> p >> q;
   int a, b;
   while (fin >> a >> b)
      gf[a][b] = gf[b][a] = 1;
   
   fill(lung + 1, lung + n+1, INT_MAX-1);
   lung[p] = 0;
   dfs(p);

   vector<int> lant;
   for (int nod = q; nod != p; nod = ant[nod])
      lant.push_back(nod);
   lant.push_back(p);

   fout << lant.size() << '\n';
   for (int i = lant.size()-1; i >= 0; --i)
      fout << lant[i] << ' ';
}