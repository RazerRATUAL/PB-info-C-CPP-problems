#include <iostream>
#include <cmath>
using namespace std;
void CitesteSir(int a[], int& n);
void minmax(int a[],int& minim, int& maxim, int& n);


int main()
{
    int a[1001], n, minim, maxim;
   void CitesteSir(int a[], int& n);
   void minmax(int a[]);
   cout << minim << " "<< maxim;
    return 0;
}
void minmax(int a[],int& minim, int& maxim, int& n)
{
    minim=1e9;
    maxim=-1e9;
    for(int i = 1; i <= n; ++i)
      {
          if(a[i] > maxim)
        maxim = a[i];
       if(a[i] < minim)
        minim = a[i];
      }
}
void CitesteSir(int a[], int& n)
{
    cin >> n;
   for(int i = 1; i <= n; ++i)
   {
       cin >> a[i];
    }
}
