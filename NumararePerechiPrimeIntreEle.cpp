#include <iostream>
#include <iomanip>
using namespace std;

int cmmdc(int n, int m);

int main()
{
    int a, b, cnt = 0;
    int d;
    cin >> a >> b;
    while (b)
    {
        d = cmmdc (a, b);
        if (d == 1)
            ++cnt;
        a = b;
        cin >> b;
    }

    cout << cnt;

    return 0;
}

int cmmdc(int n, int m)
{
    int rest;

    while (m != 0)
    {
        rest = n % m;
        n = m;
        m = rest;
    }

    return n;

}
