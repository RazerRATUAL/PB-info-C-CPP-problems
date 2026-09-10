#include <iostream>
using namespace std;

int Adiacenta(int a[][101], int n);
void Citire(int a[][101], int &n);

int main()
{
   int a[101][101],n;
   Citire(a,n);
   cout<<Adiacenta(a,n);
    return 0;
}

int Adiacenta(int a[][101], int n)
{
    int i,j;
    for(i = 2; i <= n; i++)
        for(j = 1; j <= i - 1; j++)
        if(a[i][j] != a[j][i])
        return 0;
    for(i = 1; i <= n; i++)
        if(a[i][i] != 0)
        return 0;
    for(i = 1; i <= n; i++)
        for(j = 1;j <= n;j++)
           if(a[i][j] !=0 && a[i][j] != 1)
              return 0;
    return 1;
}
void Citire(int a[][101], int &n)
{
    cin >> n;
    int i,j;
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++)
        cin>>a[i][j];
}

