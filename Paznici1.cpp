#include <iostream>
using namespace std;

int main()
{
    unsigned long long n, m, p;
    cin >> n >> m;
    {if (n % 2 !=0)
        n = n + 1;
    if ( m % 2 != 0)
        m = m + 1;
    }
    if ( (m * n) % 4 != 0 )
         p = (n * m) / 4 + 1;
    else
        p = (n * m) / 4;

    cout << p;
    return 0;
}
