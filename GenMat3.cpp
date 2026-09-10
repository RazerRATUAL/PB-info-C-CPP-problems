#include <iostream>
using namespace std;

int a[21][21];
int main()
{
    int n, m, nr = 1;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            a[i][j] = nr * nr;
            nr += 2;
        }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}