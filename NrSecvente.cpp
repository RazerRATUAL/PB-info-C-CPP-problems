#include <iostream>
using namespace std;

const int Dim = 100001;
int a[Dim];
int n, t, k;
int nr_sec = 0;
int c = 0;

int main()
{
    cin >> n >> t >> k;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if (a[i] <= t)
        {
            ++c;
            if (c >= k)
                ++nr_sec;
        }
        else
            c = 0;
    }

    cout << nr_sec;

    return 0;
}
