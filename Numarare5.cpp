#include <iostream>
using namespace std;

bool scif(int a,int b)
{
    int s = 0, s1 = 0;
    while (a!=0)
        {
            s += a % 10;
            a /= 10;
        }
    while (b!=0)
        {
            s1 += b % 10;
            b /= 10;
        }
    if (s == s1)
        return true;
    return false;
}
int main ()
{
    int n, a[202], cnt = 0;
    cin >> n;
    for (int i = 0 ; i < n; ++i)
        cin >> a[i];
    for(int i = 0 ; i < n; ++i)
    {
        for (int j = i + 1 ; j < n ; ++j)
            if (scif(a[i],a[j]))
             cnt++;
    }
    cout << cnt;
    return 0;
}
