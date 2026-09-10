#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1001];
    int p, u;
    int max = -1, min = 100000001;
    for (int i = 0 ; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] > max)
            p=i, max = a[i];
        if (a[i] < min)
            u=i, min = a[i];
    }
    if (p > u)
    {
        int c = p;
        p = u;
        u = c;
    }
    for (int i = p; i <= u; ++i)
        cout << a[i] << ' ';
    return 0;
}
