#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n;
    long long x;
    int r;

    cin >> n;
    for (int i = 1;i <= n; ++i)
    {
        cin >> x;
        r = cbrt(x);
        if (r * r * r == x)
            cout << "DA\n";
        else
            cout << "NU\n";
    }
    return 0;
}
