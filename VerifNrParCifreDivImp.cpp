
#include <iostream>
using namespace std;
int par(int a);
int main ()
{
    int n;
    cin >> n;
    int tmp, cn=0;
    for (int i = 1; i <= n ; ++i)
    {
        cin >> tmp;
        if (par(tmp))
        cn++;
    }
    if (cn==n)
    cout << "DA";
    else
    cout << "NU";
    return 0;    
}
int par(int a)
{
    int cnt=0;
    while(a)
    a/=10,cnt++;
    if (cnt%2==0)
    return 1;
    else
    return 0;
}