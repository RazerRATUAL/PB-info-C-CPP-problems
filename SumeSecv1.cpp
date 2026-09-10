#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int a[100001];
    long long sp[100001];
    sp[0] = 0;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        sp[i] = sp[i - 1] + a[i];
    }
    int x, y;
    cin >> m;
    long long smax = -1000000000000000000;
    for(int i = 1; i <= m; ++i)
    {
        cin >> x >> y;
        if(x > y)
            swap(x, y);
        long long sum = sp[y] - sp[x-1];
        if(sum > smax)
            smax = sum;
    }
    cout << smax;
    return 0;
}
