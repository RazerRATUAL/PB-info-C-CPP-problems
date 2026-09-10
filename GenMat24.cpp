#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n], i, j;

    for (i = n - 1; i >= 0; --i)
        cin >> a[i][0];

    for (j = 2; j < n; j += 2)
        for (i = n - 1; i >= 0; --i)
            a[i][j] = a[i][0];
    for (j = 1; j < n; j += 2)
        for (i = 0; i < n; ++i)
            a[i][j] = a[n - i - 1][0];

    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}