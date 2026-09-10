#include <iostream>
using namespace std;
int main()
{
    int n, r;
    cin >> n >> r;
    int cnt = 0;
    for(int i = 1; i <= n; ++i)
    {
        long long x;
        cin >> x;
        if(x % 9 == r)
            cnt++;
    }
    cout << cnt;
    return 0;
}
