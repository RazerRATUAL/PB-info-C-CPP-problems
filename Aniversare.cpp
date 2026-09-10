#include <iostream>
#include <algorithm>
using namespace std;
 
struct Data {
    int an, luna, zi;
 
    friend istream& operator >> (istream& is, Data& d)
    {
        return is >> d.an >> d.luna >> d.zi;
    }
 
    bool operator < (Data const& d) const
    {
        return d.an < an || (an == d.an && d.luna < luna) || (an == d.an && d.luna == luna && d.zi < zi);
    }
};
 
int main()
{
    int n;
    cin >> n;
    Data mn {0, 0, 0};
    Data mx {3000, 12, 31};
    Data x;
    int mx1 = 0, mn1 = 0;
 
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        if(x < mn)
        {
            mn.an = x.an;
            mn.luna = x.luna;
            mn.zi = x.zi;
            mn1 = i;
        }
 
        if(mx < x)
        {
            mx.an = x.an;
            mx.luna = x.luna;
            mx.zi = x.zi;
            mx1 = i;
        }
    }
 
    cout << mn1 << ' ' << mx1;
}