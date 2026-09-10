#include <iostream>

using namespace std;

int Cmmdc(int a, int b);

unsigned short n;
unsigned long long x, xmin = 2000000000, xmax = 0;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> x;
        if(x < xmin)
            xmin = x;
        if(x > xmax)
            xmax = x;
    }
    x = Cmmdc(xmin, xmax);
    cout << xmin / x<< '/' << xmax / x;
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
