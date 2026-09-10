#include <iostream>

using namespace std;

unsigned int n, p, q, r1, r2, r3, r4;

int main()
{
    cin >> n >> p >> q;

    for(int i = 1; i <= n; ++i)
    {
        if(i % p == 0 && i % q == 0)
            ++r4;
        else
        {
            if(i % p == 0)
                ++r2;
            if(i % q == 0)
                ++r3;
        }
    }
    r1 = n - r2 - r3 - r4;
    cout << r1 << '\n' << r2 << '\n' << r3 << '\n' << r4;
    return 0;
}
