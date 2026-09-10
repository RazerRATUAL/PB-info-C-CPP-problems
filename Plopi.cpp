#include <iostream>
using namespace std;

int main ()
{
    int n,max=0,cnt=0;
    cin >> n;
    int a[1002];
    for (int i = 1 ; i <= n; ++i)
    {
        cin >> a[i];
        a[0]=a[1];
        if (a[i]-a[i-1] < 0)
        {
            if (a[i-1]-a[i]> max)
            max=a[i-1]-a[i];
        }
        else
        {
            if (a[i]-a[i-1]>max)
            max=a[i]-a[i-1];
        }
    }
    for (int i = 1 ; i <= n; ++i)
    {
        if (a[i]-a[i-1] < 0)
        {
            if (a[i-1]-a[i]== max)
            cnt++;
        }
        else
        {
            if (a[i]-a[i-1]==max)
            cnt++;
        }
    }
    cout << max << ' ' << cnt;
}
