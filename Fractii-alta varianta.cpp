#include <iostream>

using namespace std;

int Cmmdc(int a, int b);

unsigned short n;
unsigned long long d, x, y, n1, n2, s1, s2;

int main()
{
    cin >> n;
    cin >> n1 >> n2;
    for(int i = 1; i < n; ++i)
    {
        cin >> x >> y;
        n1 = x * n2 + n1 * y;
        n2 = y * n2;
    }
    d = Cmmdc(n1, n2);
    cout << n1 / d << ' ' << n2 / d;
    return 0;
}

int Cmmdc(int a, int b)
{
    int rest;
    while(b)
    {
        rest = a % b;
        a = b;
        b = rest;
    }
    return a;
}
