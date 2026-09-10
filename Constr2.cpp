#include <iostream>
using namespace std;

int a[201];
int b[201];

bool Prim(int n);

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];

        if (Prim(a[i]))
        {
            b[i] = a[i];

        }
    }

    for (int i = n; i >= 1; --i)
    {
        if (b[i] != 0)
            cout << b[i] << ' ';
    }

    return 0;

}

bool Prim(int n)
{
    int nr_div = 0;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            nr_div = 1;
            break;
        }
    }

    if (nr_div == 0 && n != 0 && n != 1)
        return true;

    else
        return false;
}
