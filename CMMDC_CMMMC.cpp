#include <iostream>
using namespace std;

int main()
{
    long long int a, b, ca, cb;
    cin >> a >> b;
    ca = a, cb = b;
    while(b > 1)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    cout << a << ' ' << 1LL * (ca / a * cb);
    return 0;
}
