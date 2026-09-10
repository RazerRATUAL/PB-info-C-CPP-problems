#include<iostream>
using namespace std;

int Suma(int st, int dr);
void CitesteSir(int a[], int n);
const int Dim = 1001;
int a[Dim];

int main()
{
    int n;

    cin >> n;

    CitesteSir(a, n);

    cout << Suma(1, n);
}

void CitesteSir(int a[], int n)
{
    if (n == 0)
        return;

    CitesteSir(a, n - 1);

    cin >> a[n];
}
int Suma(int st, int dr)
{
    if (st == dr)
        return a[st];

    int m = (st + dr) / 2;

    int s1 = Suma(st, m);
    int s2 = Suma(m + 1, dr);

    return s1 + s2;

}
