#include <iostream>
using namespace std;

int suma(int v[], int n);
int v[100];

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> v[i];

    cout << suma(v, n);
}

int suma(int v[], int n)
{
    if (n == 0)
        return 0;

    return v[n - 1] + suma(v, n - 1);
}


