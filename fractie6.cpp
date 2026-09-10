#include <bits/stdc++.h>
#define DAU  ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define PLEC return 0;
using namespace std;
int n, a, b, c2, c5;
inline int cmmdc(int a, int b)
{
    if (a % b == 0)
        return b;
    else return cmmdc(b, a % b);
}
int main()
{
    DAU
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a >> b;
        b /= cmmdc(a, b);
        c2 = c5 = 0;
        while (b % 2 == 0)
            ++c2, b /= 2;
        while (b % 5 == 0)
            ++c5, b /= 5;
        if (b == 1)
            cout << "fractie finita\n";
        else if (!c2 && !c5)
            cout << "fractie periodica simpla\n";
        else cout << "fractie periodica mixta\n";
    }
    PLEC
}
