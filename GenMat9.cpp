#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    int a[16][16];

    for (i = 1; i <= n; ++i)
    {
        a[1][i] = a[i][1] = 1 + i;
        a[n][i] = a[i][n] = n + i;
    }

    for (i = 2; i < n; ++i)
        for (j = 2; j < n; ++j)
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j] + a[i - 1][j + 1];

    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= n; ++j)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}