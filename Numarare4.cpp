#include <iostream>
using namespace std;
int Prime(int a, int b)
{
   int d,r;
   if(b == 0)
    d = a;
   else
   {
       while(b != 0)
       {
           r = a % b;
           a = b;
           b =r;
       }
       d = a;
   }
   return d;
}
int main()
{
    int n, a[201], sum=0, prim=0;
    cin>>n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
     for(int i = 1;i <= n; i++)
    {
       if(Prime(a[i],a[n]) == 1)
       prim++;
    }
    cout << prim;
     return 0;
}
