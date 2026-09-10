#include <iostream>
using namespace std;

int Cmmdc(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;

    int cmmdc = Cmmdc(a, b);
    for (int d = 1; d <= cmmdc; ++d)
        if (a % d == 0 && b % d == 0)
            cout << d << ' ';


    return 0;
}

int Cmmdc(int a, int b)
{
    int rest;
    while (b)
    {
        rest = a % b;
        a = b;
        b = rest;
    }

    return a;
}
