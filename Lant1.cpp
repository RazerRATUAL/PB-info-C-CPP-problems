#include <fstream>
#include <vector>
#include <list>

using namespace std;
ifstream fin ("lant1.in");
ofstream fout ("lant1.out");

const int nMAX = 100;

int n, p, q, r;
bool gf[nMAX + 1][nMAX + 1];
int ant[nMAX + 1]; 
void dfs(int nod);

int main()
{
   fin >> n >> p >> q >> r;
   int a, b;
   while (fin >> a >> b)
      gf[a][b] = gf[b][a] = 1;
   
   ant[r] = -1;
   dfs(r);

   vector<int> st, dr;

   int nod = p;
   while (nod != r)
   {
      st.push_back(nod);
      nod = ant[nod];
   }

   nod = q;
   while (nod != r)
   {
      dr.push_back(nod);
      nod = ant[nod];
   }

   fout << st.size() + dr.size() + 1 << '\n';
   for (int x : st)
      fout << x << ' ';
   fout << r << ' ';
   for (int i = dr.size()-1; i >= 0; --i)
      fout << dr[i] << ' ';
}

void dfs(int nod)
{
   for (int i = 1; i <= n; ++i)
      if (gf[nod][i] && !ant[i])
      {
         ant[i] = nod;
         dfs(i);
      }
}