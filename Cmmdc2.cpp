#include <iostream>
using namespace std;

int n, a, b;

int nrcif(int n)
{
    int k = 0;
    while(n)
    {
        k++;
        n /= 10;
    }
    return k;
}
int putere(int nr)
{
    int p = 1;
    while (nr)
    {
        p *= 10;
        nr--;
    }
    return p;
}
int cmmdc(int a, int b)
{
    int r;
    while(b)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main()
{
    
    cin >> n;
    
    int nr = nrcif(n);

    int p = putere(nr / 2);

    a = n / p;
    if (nr % 2 != 0)
        a /= 10;
    b = n % p;

    cout << cmmdc(a, b);
}