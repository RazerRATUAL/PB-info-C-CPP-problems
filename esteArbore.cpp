#include <fstream>

using namespace std;
ifstream fin ("estearbore.in");
ofstream fout ("estearbore.out");

const int nMAX = 100;

int n, m;
bool gf[nMAX + 1][nMAX + 1];
bool viz[nMAX + 1];


void dfs(int nod)
{
   viz[nod] = 1;
   for (int j = 1; j <= n; ++j)
      if (gf[nod][j] && !viz[j])
         dfs(j);
}


int main()
{
   fin >> n;
   int a, b;
   while (fin >> a >> b)
   {
      if (!gf[a][b])
      {
         gf[a][b] = gf[b][a] = 1;
         m++;
      }
   }

   if (n != m + 1)
      fout << "NU",  exit(0);

   dfs(1);

   for (int i = 1; i <= n; ++i)
      if (!viz[i])
         fout << "NU",  exit(0);
   
   fout << "DA";
}