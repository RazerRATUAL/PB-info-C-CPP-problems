#include <iostream>

using namespace std;

int Sumcif(int n)
{
    int s=0;
    while(n != 0)
    {
        s=s+n%10;
        n=n/10;
    }
    return s;
}
int main()
{
    int n,a[201],x;
    cin >> n;
    for(int i = 1;i <= n;i++)
        cin >> a[i];
    for(int i = 1;i <= n; i++)
    {
        x = Sumcif(a[i]);
        cout << a[i] % x << " ";
    }
     return 0;
}

