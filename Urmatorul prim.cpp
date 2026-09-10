#include <iostream>
#include <cmath>
using namespace std;

int prim (int n);

int main()
{
    int a;
    cin >> a;
    a++;
    while (prim(a) == 0)
    a++;
    cout << a;
    return 0;
}
int prim(int n)
{
    int div = 0;
    for (int i = 1 ; i*i <= n;++i )
    {
        if (n%i == 0)
        {
        div+=i;
        div+=n/i;
        }
        if (i * i == n)
        div -= i;
    }
    if (div == n + 1)
    return 1;
    else
    return 0;
}
