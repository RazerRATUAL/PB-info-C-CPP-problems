#include <iostream>

using namespace std;

int main()
{
   int n, k, i, j;
   cin >> n >> k;

   for (i = 1; i <= n; ++i, cout << '\n')
      for (j = 1; j <= n; ++j)
         if (i != j && i % k != j % k)
            cout << "1 ";
         else
            cout << "0 ";
}