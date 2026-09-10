#include <iostream>
#include <cmath>
using namespace std;
int a[1001];
bool prim(int x)
{
   if (x < 2)
      return false;
   if (x == 2 || x == 3)
      return true;
   if (x % 2 == 0 || x % 3 == 0)
      return false;

   for (int d = 5; d  * d<= x; d += 6)
      if (x % d == 0 || x % (d + 2) == 0)
         return false;
   return true;
}

int main()
{
   int x;
   cin >> x;
   int sum = 0;
   for(int i = 1; i <= x; ++i)
        cin >> a[i];
    for(int i = 1; i <= x; ++i)
        if(prim(a[i]))
        sum += a[i];
   
   cout << sum;
}