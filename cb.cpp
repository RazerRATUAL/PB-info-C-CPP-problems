#include <iostream>
#include <algorithm>

using namespace std;

const int Dim = 200001;
int a[Dim], n, T;
int CBMax(int y);
int CBMin(int x);
int main()
{
    cin >> n >> T;
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    sort(a, a + n);
    int x, y, cnt;

    for (int i = 1; i <= T; ++i)
    {
        cin >> x >> y;
        int p2 = CBMax(y);
        int p1 = CBMin(x);
        if (p1 == -1)
            cout << 0 << '\n';
        else
            cout << p2 - p1 + 1 <<  '\n';

    }

}
int CBMin(int v)
{
    int l = 0, r = n - 1, m;
    int poz = -1;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (a[m] >= v)
        {
            poz = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    return poz;
}
int CBMax(int v)
{
    int l = 0, r = n - 1, m;
    int poz = -1;
    while (l <= r)
    {
        m = (l + r) / 2;
        if (a[m] <= v)
        {
            poz = m;
            l = m + 1;
        }
        else
            r = m - 1;
    }
    return poz;
}
