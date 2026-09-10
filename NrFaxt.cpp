#include <iostream>
using namespace std;

int main()
{
    int n, rez = 0, nrmax = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        int cx = x;
        int cnt = 0;
        int d = 2;
        while(x > 1)
        {
            int p = 0;
            while(x % d == 0)
                p ++, x /= d;
            if(p)
                cnt++;
            d++;
            if(d * d > x)
                d = x;
        }
        if(cnt > nrmax)
            nrmax = cnt, rez = cx;
        else if(cnt == nrmax && cx < rez)
            rez = cx;
    }
    cout << rez;
    return 0;
}
