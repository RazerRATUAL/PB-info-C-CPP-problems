#include <iostream>
using namespace std;
void cmmdc(int a, int b, int r);
int a[21][21];
int main()
{
   int n;   cin >> n;
   int i, j;
   int ss, sj, r;

   for (i = 0; i < n; ++i)
      for (j = 0; j < n; ++j)
         cin >> a[i][j];

   ss = 0;
   for (i = 0; i < n-1; ++i)
      for (j = i+1; j < n; ++j)
         ss += a[i][j];

   sj = 0;
   for (i = 1; i < n; ++i)
      for (j = 0; j < i; ++j)
         sj += a[i][j];

    cmmdc(ss, sj, r);


   return 0;
}

void cmmdc(int a, int b, int r){
    r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;

        r = a % b;
    }
    cout << b;
}