#include <iostream>
using namespace std;

const int Dim = 100001;
int a[Dim], n;

int main()
{
    long long cnt = 1;
    long long s = 0;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = 2; i <= n; ++i)
    {
        if (a[i - 1] == a[i])
            cnt++;
        else
        {
            s += cnt * (cnt + 1) / 2;
            cnt = 1;
        }
    }

    cout << s + cnt * (cnt + 1) / 2;

    return 0;
}