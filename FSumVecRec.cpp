#include <iostream>
using namespace std;

int suma(int v[], int n, int i, int j);
int const Dim = 102;

int v[Dim];

int main()
{
    int n, m, o;
    cin >> n;
    cin >> m >> o;
    for(int i; i <= 1; ++i)
        cin >> v[i];

        cout << suma(v, n, m, o);
}

int suma(int v[] , int n , int i , int j)
{
    if(n == 0)
        return 0;

    if(n >= i && n <= j)
        return suma(v , n - 1 , i , j);
    return v[n] + suma(v , n - 1, i , j);
}
