#include <iostream>
using namespace std;

bool Cmmdc(int a,int b);

int main()
{
    int n, a[201], cnt = 0;
    cin >> n;

    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 1; i <= n / 2; ++i)
    {
        if(Cmmdc(a[i],a[n + 1 -i]))
            cnt++;
    }
    cout << cnt;
    return 0;
}

bool Cmmdc(int a,int b)
{
    int r = 0;
    while(b)
    {
        r = a % b;
        a = b;
        b = r;
    }

    if(a != 1)
        return false;

    return true;
}
