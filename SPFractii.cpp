#include <iostream>

using namespace std;

int Cmmdc(int a, int b);

unsigned short a, b, c, d;
unsigned long s1, s2, p1, p2, x, y;

int main()
{
    cin >> a >> b >> c >> d;
    s1 = a * d + c * b;
    s2 = b * d;
    p1 = a * c;
    p2 = b * d;
    x = Cmmdc(s1, s2);
    cout << s1 / x << ' ' << s2 / x << '\n';
    y = Cmmdc(p1, p2);
    cout << p1 / y << ' ' << p2 / y;
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
