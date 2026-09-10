#include <iostream>
using namespace std;

int main()
{
    int n, c[11], b;
    cin >> b >> n;

    for (int i = n; i >= 1; --i)
        cin >> c[i];

    int N = 0;
    int p = 1;

    for (int i = 1; i <= n; ++i)
    {
        N += c[i] * p;
        p *= b;
    }

    cout << N;

    return 0;
}
