#include <iostream>
using namespace std;

int cmmdc(int a, int b)
{
    int ca = a, cb = b;
    while(b > 1)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    if(ca % a == cb % a)
        return a;
    return 1;
}

int n, a, b, a1, b1, max1, maxi;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a >> b;
        int c = cmmdc(a, b);
        if(c > maxi)
            maxi = c, a1 = a, b1 = b;
        else if(c == maxi && a + b > max1)
            max1 = a + b, a1 = a, b1 = b;
    }
    cout << a1 << ' ' << b1;
    return 0;
}
