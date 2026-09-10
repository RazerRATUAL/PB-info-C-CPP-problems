#include <iostream>
using namespace std;

int main()
{
    int cnt = 0;
    int n;
    cin >> n;
    int val = 2;
    while(cnt < n)
    {
        int cval = val;
        int d = 2;
        int cn = 1;
        while(val > 1)
        {
            int p = 0;
            while(val % d == 0)
                p++, val /= d;
            cn = cn * (p + 1);
            d++;
            if(d * d > val)
                d = val;
        }
        val = cval;
        if(cn == 2)
            cout << val << ' ', cnt++;
        val++;
    }
    return 0;
}
