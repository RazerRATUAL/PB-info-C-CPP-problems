#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

const int nMAX = 100;

int n, m, k;
vector<int> gf1[nMAX + 1];
vector<int> gf2[nMAX + 1];
int d1[nMAX + 1];
int d2[nMAX + 1];

void Bfs(int nod, vector<int> gf[nMAX + 1], int d[nMAX + 1]);

void Bfs(int nod, vector<int> gf[nMAX + 1], int d[nMAX + 1])
{
   queue<int> q;
   q.push(nod);
   d[nod] = 1;

   while (!q.empty())
   {
      nod = q.front();
      q.pop();

      for (int nex : gf[nod])
         if (!d[nex])
         {
            d[nex] = d[nod] + 1;
            q.push(nex);
         }
   }
}


int main()
{
   cin >> n >> m >> k;
   for (int i = 1; i <= m; ++i)
   {
      int a, b;
      cin >> a >> b;
      gf1[a].push_back(b);
      gf2[b].push_back(a);
   }

   Bfs(1, gf1, d1);
   Bfs(1, gf2, d2);

   for (int i = 1; i <= n; ++i)
      if (d1[i]-1 == k || d2[i]-1 == k)
         cout << i << ' ';
   
   if (cout.tellp() == 0)
      cout << "Nu exista";
}