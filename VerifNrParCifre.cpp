#include <iostream>
using namespace std;
int a[101];
void CitesteSir(int &n, int a[]){
    for(int i = 1; i <= n; i++)
        cin >> a[i];
}
void Verif(int &n,int x, int a[], bool b){
       for (int i = 1; i <= n; ++i)
        {
        x = a[i];
        while (x > 99)
             x /= 100;

        if (x <= 9)
        {
            b = false;
            break;
        }
   }

}
int main()
{
   int n, i, x;
   bool pare = true;
   cin >> n;

    CitesteSir(n, a);
    Verif(n, x, a, pare);

   if (pare)
      cout << "DA";
   else
      cout << "NU";
   return 0;
}