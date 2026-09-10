#include <iostream>

using namespace std;

long long sd, sd1;
int n, m, p;

int main()
{
    cin >> n >> m;
    for(int d = 1; d * d <= n; ++d)
        if(n % d == 0)
        {
            sd += d;
            p = n / d;
            if(d != p)
                sd += p;
        }
    sd -= n;
    for(int d = 1; d * d <= m; ++d)
        if(m % d == 0)
        {
            sd1 += d;
            p = m / d;
            if(d != p)
                sd1 += p;
        }
    sd1 -= m;
    if(sd == m && sd1 == n)
        cout << "PRIETENE";
    else
        cout << "NU SUNT PRIETENE";
    return 0;
}
