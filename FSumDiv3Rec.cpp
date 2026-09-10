#include <iostream>
using namespace std;

int sum3(int v[], int n);

int v[100];
int main()
{
       int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> v[i];

    cout << sum3(v, n);
}

int sum3(int v[], int n)
{
    if (n == 0)
        return 0;
    if(v[n - 1] % 3 == 0)
        return v[n - 1] + sum3(v, n - 1);
    return sum3(v, n - 1);
}
