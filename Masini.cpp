#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin ("masini.in");
ofstream fout ("masini.out");
const int nMAX = 1e3;

int timpi[nMAX + 1];

int main()
{
   int n, t, cnt, i;
   fin >> n >> t;

   for (i = 1; i <= n; ++i)
      fin >> timpi[i];

   sort(timpi + 1, timpi + n+1);
   cnt = 0;
   for (i = 1; i <= n && t != 0; ++i)
      if (t - timpi[i] >= 0)
      {
         t -= timpi[i];
         cnt ++;
      }
      else
         t = 0;

   fout << cnt;
}