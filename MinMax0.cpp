#include <iostream>
#include <cmath>
using namespace std;
int main()
{
   int a[10000], n, minim=1e9, maxim=-1e9;
   cin >> n;
   for(int i = 1; i <= n; ++i)
   {
       cin >> a[i];
       if(a[i] > maxim)
        maxim = a[i];
       if(a[i] < minim)
        minim = a[i];
   }
   cout << minim << " "<< maxim;
    return 0;
}
