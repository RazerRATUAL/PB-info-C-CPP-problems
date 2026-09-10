#include <iostream>
using namespace std;
int main()
{
    double n,cate = 0,a[1001],pr,c = 0,s = 0;
    double sum;
    cin>>n;
    for(int i = 1;i <= n; i++)
    {
        cin>> a[i];
        s = s + a[i];
        c++;
    }
    sum = s/c;
    for(int i = 1; i<=n; i++)
    {
        if(a[i] >= sum)
            cate++;
    }
    cout << cate;
    return 0;
}
