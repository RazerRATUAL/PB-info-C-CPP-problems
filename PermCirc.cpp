#include <iostream>
#include <cmath>
using namespace std;

const int Dim = 50;
int a[Dim];


void Citire(int &n, int a[Dim]);

int main()
{
    int n;
    int aux = 0;
    cin >> n;

    Citire(n,a);
    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';

    cout << '\n';

    for (int i = 1; i <= n - 1; ++i)
    {
        aux = a[1];

        for (int j = 1; j <= n - 1; ++j)
            a[j] = a[j + 1];

        a[n] = aux;

        for (int j = 1; j <= n; ++j)
            cout << a[j] << ' ';

        cout << '\n';
    }

    return 0;
}

void Citire(int &n, int a[Dim]) {
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}