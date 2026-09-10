#include <iostream>
using namespace std;

const int Dim = 201;
int a[Dim];
bool Cmmdc(int a, int b);

int main()
{
    int n;
    int cnt {0};
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = 1; i <= n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
            if (Cmmdc(a[i], a[j]))
                ++cnt;
    }

    cout << cnt;

    return 0;
}

bool Cmmdc(int a, int b)
{
    int rest;
    while(b)
    {
        rest = a % b;
        a = b;
        b = rest;
    }

    if (a == 1)
        return true;

    return false;
}
