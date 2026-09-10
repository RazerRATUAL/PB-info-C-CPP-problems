#include <fstream>
using namespace std;

ifstream cin("minmax.in");
ofstream cout("minmax.out");
int a[10000],n,minim=999999999,maxim=-999999999;

int main()
{
   cin >>n;
   for(int i=1;i<=n;++i)
   {
       cin >>a[i];
       if(a[i] > maxim)
            maxim = a[i];
       if(a[i] < minim)
            minim = a[i];
   }
   cout << minim <<" "<< maxim;
    return 0;
}
