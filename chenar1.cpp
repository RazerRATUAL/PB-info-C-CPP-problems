#include <iostream>
using namespace std;

int main()
{
    const int MaxN = 101;
    int a[MaxN][MaxN];
    int n, m, x;

    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> a[i][j];

    for (int j = 1; j <= m; ++j)
        a[1][j] = a[n][m];

    for (int i = 1; i <= n; ++i)
        a[i][m] = a[n][m];

    for (int j = m; j >= 1; --j)
        a[n][j] = a[n][m];

    for (int i = n; i >= 1; --i)
        a[i][1] = a[n][m];

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
            cout << a[i][j] << ' ';

        cout << '\n';
    }
}
