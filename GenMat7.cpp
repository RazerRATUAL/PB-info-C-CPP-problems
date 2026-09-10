#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[26][26], i, j, mij = n / 2 - !(n % 2);

    for (i = 0; i < n; ++i)
        a[i][i] = a[i][n - i - 1] = 0;

    for (i = 0; i < mij; ++i)
        for (j = i + 1; j < n - i - 1; ++j)
            a[i][j] = 1;

    for (i = n - 1; i > mij; --i)
        for (j = n - i; j < i; ++j)
            a[i][j] = 2;

    for (i = 1; i <= mij; ++i)
        for (j = 0; j < i; ++j)
            a[i][j] = a[n - i - 1][j] = a[i][n - j - 1] = a[n - i - 1][n - j - 1] = 3;

    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}