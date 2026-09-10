#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[25][25], i, j;

    for (i = 0; i < n; i += 2)
        for (j = 0; j < n; ++j)
            a[i][j] = i + 1;

    for (i = 1; i < n; i += 2)
        for (j = 0; j < n; ++j)
            a[i][j] = j + 1;

    for (i = 0; i < n; ++i)
    {
        for (j = 0; j < n; ++j)
            cout << a[i][j] << ' ';
        cout << '\n';
    }

    return 0;
}