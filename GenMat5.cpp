#include <iostream>
using namespace std;

int main()
{
    int a[10][10], n, i, j, k = 1;
    cin >> n;
    while (n)
    {
        int cif = n % 10;
        a[1][k++] = cif;
        n /= 10;
    }
    k -= 1;
    for (i = 2; i <= k; i++)
        for (j = 1; j <= k; j++)
            a[i][j] = a[1][j];
    for (i = 1; i <= k; i++)
    {
        for (j = 1; j <= k; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
}