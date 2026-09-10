#include <iostream>

using namespace std;
int n, k, cnt, x;

int main()
{
    cin >> n >> k;
    for(int i=1;i<=n;i++)
    {
        cin >> x;
        int ok = 1;
        while(x!=0)
        {
            if(x  k > 1)
            {
                ok = 0;
                break;
            }
            x /= k;
        }
        if(ok == 1)
            cnt++;
    }
    cout << cnt;
    return 0;
}