#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

const int nMAX = 100;

int n, m;
int gradInt[nMAX + 1];
int gradExt[nMAX + 1];

int main()
{
   cin >> n >> m;
   for (int i = 1; i <= m; ++i)
   {
      int a, b;
      cin >> a >> b;
      gradExt[a] ++;
      gradInt[b] ++;
   }

   vector<int> ans;
   for (int i = 1; i <= n; ++i)
      if (gradExt[i] < gradInt[i])
         ans.push_back(i);

   cout << ans.size() << '\n';
   for (int &nod : ans)
      cout << nod << ' ';
}