#include <iostream>
using namespace std;
int main()
{
    int n,a[1001],c=0;
    cin>>n;
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {

            for(int k=j+1;k<=n;k++)
            {
                if(a[i]+a[k]>a[j] && a[i]+a[j]>a[k] && a[j]+a[k]>a[i]) c++;
            }
        }
    }
    cout<<c;
    return 0;

}
