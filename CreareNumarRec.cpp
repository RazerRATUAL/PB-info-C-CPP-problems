#include <iostream>
using namespace std;

void F(int n, int a[], int& k);

int main()
{
    int a[] = {1, 3, 5, 2, 7, 1};
    int n = 6;
    int k = 0;

    F(n, a, k);

    cout << k;

    return 0;
}

void F(int n, int a[], int& k)
{
    if (n == 0)
    {
        k = -1;
        return;
    }

    F(n - 1, a, k);

    if (a[n - 1] % 2 == 0)
    {
        if (k < 0)
            k = a[n - 1];

        else
            k = k * 10 + a[n - 1];
    }
}
