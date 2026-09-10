#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int d = 2;
    int p;
    int max = 0;
    int dmax = 0;
    while(n > 1)
    {
        p = 0;
        while(n % d == 0)
        {
            p++;
            n /= d;
        }
        if(p>0)
        {
            if(p >= max && d > dmax)
            max = p , dmax = d;
        }
        d++;
        if(d * d > n)
        d = n;
    }
    cout << dmax;
}
