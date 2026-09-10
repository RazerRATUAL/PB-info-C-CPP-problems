#include <iostream>
using namespace std;

int n, t, k, a;
int nr_sec = 0;
int c = 0;

int main()
{
    cin >> n >> t >> k;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a;
        if (a <= t)
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
