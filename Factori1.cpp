#include <iostream>

using namespace std;

unsigned long long n, m, n1, m1, S1, S2;

int main()
{
    cin >> n >> m;

    n1 = n;
    m1 = m;

    int d = 2, p;

    while(n > 1)
    {
        p = 0;
        while(n % d == 0)
        {
            ++p;
            n /= d;
        }
        if(p)
            S1 += d + p;
        ++d;
        if(n > 1 && d * d > n)
            d = n;
    }

    d = 2;

    while(m > 1)
    {
        p = 0;
        while(m % d == 0)
        {
            ++p;
            m /= d;
        }
        if(p)
            S2 += d + p;
        ++d;
        if(m > 1 && d * d > m)
            d = m;
    }

    if(S1 > S2)
        cout << n1;
    else if(S1 < S2)
        cout << m1;
    else if(S1 == S2)
    {
        if(n1 >= m1)
            cout << m1;
        else
            cout << n1;
    }
    return 0;
}



