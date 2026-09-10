#include <iostream>
using namespace std;

void num(int n ,int a[]);
int const Dim = 51;

int main()
{
    int v[Dim];
    int n;
    for(int i = 1, i <= n, ++i)
        cin >> v[i];

    num(n, v);
    
    for(int i = 1, i <= n, ++i)
        cout << v[i];
}

void num(int n ,int a[])
{
    if (n == 0)
        return;
    if (a[n - 1] <= a[0])
        a[n - 1] = 0;
    num(n - 1, a);
}