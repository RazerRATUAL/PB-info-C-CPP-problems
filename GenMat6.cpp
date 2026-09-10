#include <iostream>

using namespace std;

int n, m, k, v[1001], a[100][100], i, j;

int main()
{
    cin >> m;
    n = 6;
    for (i = 1; i <= n && m != 0; i++)
    {
        for (j = i + 1; j <= n; j++)
        {
            a[i][j] = m % 10;
            a[j][i] = m % 10;
        }
        m /= 10;
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}