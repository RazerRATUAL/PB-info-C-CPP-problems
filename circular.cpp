#include <iostream>

using namespace std;

int main()
{
    long long int n, cn, c=1, s=0, k=0 ;
    cin>>n;
    cn=n;
    while(cn)
    {
        c*=10;
        k++;
        cn/=10;
    }
    c/=10;
    while(k)
    {
        n=(n%10)*c+n/10;
        s+=n;
        k--;
    }
    cout<<s;
    return 0;
}