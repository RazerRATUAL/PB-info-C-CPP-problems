#include <iostream>
using namespace std;

int numarare(int v[100],int n);

int main()
{
    int v[100];
    int n;
    cin >> n;

    cout << numarare(v, n);
}

int numarare(int v[100], int n)
{
    if(n == 1)
        return 0;
    if(v[n - 1] == v[n - 2])
        return 1 + numarare(v, n - 1);
    return numarare(v, n - 1);
}
