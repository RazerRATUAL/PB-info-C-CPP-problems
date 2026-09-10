#include <iostream>
#include <climits>
#include <vector>
using namespace std;
const int nMAX = 100;

vector<pair<int, int>> mat[nMAX + 1];
vector<pair<int, int>> :: iterator it;
int main()
{
   int n, m, i, j, p, sum;
   int vfmin;  double medmin;
   cin >> n >> m;

   while (m--)
   {
      cin >> i >> j >> p;
      mat[i].push_back({j, p});
      mat[j].push_back({i, p});
   }

   vfmin = 0;
   medmin = INT_MAX;
   for (i = 1; i <= n; ++i)
   {
      sum = 0;
      for (it = mat[i].begin(); it != mat[i].end(); ++it)
         sum += it->second;
      if ((double) sum / mat[i].size() < medmin)
      {
         medmin = (double) sum / mat[i].size();
         vfmin = i;
      }
   }

   cout << vfmin;
}