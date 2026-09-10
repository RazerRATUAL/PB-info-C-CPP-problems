#include <iostream>
using namespace std;

int a[16];

int sub(int n, int v[], int k)
{
    int cnt = 0;
    int s = 0;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] % 2 == 1)
            s += v[i], cnt++;

        if (cnt == k)
            return s;
    }
    if (cnt < k)
        return -1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    cout << sub(n, a, k);

    return 0;
}
