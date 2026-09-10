#include <iostream>
using namespace std;

const int MaxN = 101;
int a[MaxN][MaxN];
int n, m;

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> a[i][j];

    for (int j = 1; j <= m; ++j)
        for (int i = 1; i <= n; ++i)
            a[i][j - 1] = a[i][j];

    for (int i = 1; i <= n; ++i)
        a[i][m] = a[i][0];

    for (int i = 1; i <= n; ++i, cout << '\n')
        for (int j = 1; j <= m; ++j)
            cout << a[i][j] << ' ';
}