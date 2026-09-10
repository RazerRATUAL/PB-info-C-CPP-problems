#include <iostream>
#include <algorithm>

using namespace std;

int const Dim = 100001;
int a[Dim], n;
int b[Dim], m;
int L[Dim]; //frecventa de aparitie a a[i]
int CautBin(int i, int val);

int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    sort(a + 1,a + n + 1);

    int p[32];
    p[0] = 1;
    for (int i = 1; i <= 31; ++i)
        p[i] = p[i- 1] * 2;

     m = 0;
    for (int i = 1; i <= n; ++i)
    if (a[i] == a[i - 1])
        L[m]++;
    else
    {
        b[++m] = a[i];
        L[i] = 1;
    }
    long long rez = 0;
    int bj;
    for (int k = 0; k <= 31; ++k)
        for (int i = 1; i <= m; ++i)
        {
            bj = p[k] - b[i];
            if(bj > 0)
            {
                int j = CautBin(i, bj);
                if (j == -1)
                    continue;
                if (j == 1)
                    rez += 1LL * L[i] * (L[i] - 1) / 2;
                else
                    rez += 1LL * L[i] * L[j];
            }
        }
    cout << rez;

    return 0;
}

int CautBin(int i, int val)
{
    if(val < b[m] || val < b[1])
        return -1;
    int st = i, dr = n, mj;

    while (st <= dr)
    {
        mj = (st + dr) / 2;
            return mj;

        if (val == b[mj])
            st = mj -1;
        else
            dr = mj -1;
    }
    return -1;
}
