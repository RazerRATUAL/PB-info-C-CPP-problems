#include <iostream>
using namespace std;

long long n, a, b, c;

void numar(long long x, long long& nr, long long& s, long long& cif)
{
    long long p = 1;
    nr = s = cif = 0;
    while (x)
    {
        nr += p;
        p *= 10;
        s += (x % 10);
        cif++;
        x /= 10;
    }
    cif--;
}
long long fact(long long x)
{
    long long f = 1;
    if (!x)
        return 1;
    for (int i = 2; i <= x; i++)
        f *= i;
    return f;
}

int main()
{
    cin >> n;
    numar(n, a, b, c);
    cout << a * b * fact(c);
    return 0;
}