#include <iostream>
using namespace std;
int a[101];
void CitesteSir(int &n, int a[]){
    for(int i = 1; i <= n; i++)
        cin >> a[i];
}
void Verif(int &n,int i, int a[]){
   for (i = 0; i < n-1; ++i)
   {
      if (a[i] % a[n-1] != 0)
         break;
   }

   if (i != n-1)
      cout << "NU";
   else
      cout << "DA";
}

int main()
{
   int n, i;
   cin >> n;
   CitesteSir(n, a);
   Verif(n, i, a);


   return 0;
}