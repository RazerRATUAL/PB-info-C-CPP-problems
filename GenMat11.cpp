#include <iostream>
using namespace std;
int a[21][21];

int main()
{
    int n, m = 2;
    cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; ++j)
        {
            if (m % 3 == 0)
                m += 2;

            a[i][j] = m;
            m += 2;
        }

    for (int i = 1; i <= n; i++, cout << '\n')
        for (int j = 1; j <= n; ++j)
            cout << a[i][j] << " ";

    return 0;
}