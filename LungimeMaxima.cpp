#include <bits/stdc++.h>
using namespace std;
ifstream fin ("lungimeminima.in");
ofstream fout ("lungimeminima.out");

const int nMAX = 100;

int n, p, l;
bool gf[nMAX + 1][nMAX + 1];
int lung[nMAX + 1];

void dfs(int nod)
{
   for (int i = 1; i <= n; ++i)
      if (gf[nod][i] && lung[nod] + 1 < lung[i])
      {
         lung[i] = lung[nod] + 1;
         dfs(i);
      }
      
}


int main()
{
   fin >> n >> p >> l;
   int a, b;
   while (fin >> a >> b)
      gf[a][b] = gf[b][a] = 1;
   
   fill(lung + 1, lung + n+1, INT_MAX-1);
   lung[p] = 0;
   dfs(p);

   vector<int> noduri;
   for (int i = 1; i <= n; ++i)
      if (lung[i] == l)
         noduri.push_back(i);
   
   fout << noduri.size() << '\n';
   for (int nod : noduri)
      fout << nod << ' ';
}