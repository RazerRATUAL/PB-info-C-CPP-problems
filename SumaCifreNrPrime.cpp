#include <iostream>
using namespace std;

int prim(int n)
{
    int cnt=0;
    for (int i = 1 ; i * i <= n ; ++i)
    {
        if (n%i==0)
        cnt+=2;
        if (i*i==n)
        cnt--;
    }
    if (cnt==2)
    return 1;
    else
    return 0;
}
int sum(int n)
{
    int s=0;
    while (n)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    int a[1001];
    int s=0;
    for (int i = 0 ; i < n ; ++i)
    {
    cin >> a[i];
    if (prim(a[i]))
        s+=sum(a[i]);
    }
    cout << s;
}
