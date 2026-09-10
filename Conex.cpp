#include <fstream>
#include <vector>
#include <queue>
using namespace std;
ifstream fin ("conex.in");
ofstream fout ("conex.out");
const int nMAX = 100;

vector<int> mat[nMAX + 1];
queue<int> q;
bool vizitate[nMAX + 1];

int main()
{
   int n, i, j, x;
   bool ok;
   fin >> n;

   while (fin >> i >> j)
   {
      mat[i].push_back(j);
      mat[j].push_back(i);
   }

   // parcurgem din nodul 1
   q.push(1);
   vizitate[1] = 1;
   while (!q.empty())
   {
      x = q.front();
      q.pop();

      for (int &vecin : mat[x])
         if (vizitate[vecin] == 0)
         {
            q.push(vecin);
            vizitate[vecin] = 1;
         }
   }

   ok = 1;
   for (i = 1; i <= n; ++i)
      if (vizitate[i] == 0)
         ok = 0;
   
   fout << (ok ? "DA" : "NU");
}