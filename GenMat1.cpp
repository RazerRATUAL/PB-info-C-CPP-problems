#include <iostream>
using namespace std;

int a[21][21];
int main()
{
    int m, n;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (i > j)
                a[i][j] = j;
            else
                a[i][j] = i;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}