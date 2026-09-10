#include <iostream>
#include <algorithm>

using namespace std;

const int Nmax = 100005;
int CautBin(int x, int s);
int a[Nmax], M[Nmax], n;

int main()
{
    int i, Q, x, s;
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];

    M[1] = a[1];
    for (i = 2; i <= n; i++)
        M[i] = max(M[i - 1], a[i]);

    for (i = 2; i <= n; i++)
        a[i] += a[i - 1];


    cin >> Q;
    while (Q--)
    {
        cin >> x >> s;
        cout << CautBin(x, s) << "\n";
    }
    return 0;
}

int CautBin(int x, int s)
{
    int st, dr, p, mid;
    if (x < M[1])
        return 0;
    if (x >= M[n] && s >= a[n])
        return n;
    st = 1; dr = n; p = 0;
    while (st <= dr)
    {
        mid = (st + dr) / 2;
        if (x < M[mid] || s < a[mid])
            dr = mid - 1;
        else
        {
            p = mid;
            st = mid + 1;
        }
    }
    return p;
}
