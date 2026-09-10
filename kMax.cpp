#include <iostream>

using namespace std;
int n,k,i,j,S,v[1001];
int main()
{
    cin>>n;
    for(i=1; i<=n; i++)
        cin>>v[i];
    cin>>k;
    for(i=1; i<n; i++)
        for(j=i+1; j<=n; j++)
            if(v[i]>v[j])
                swap(v[i],v[j]);
    while(k)
    {
        v[k]=-v[k];
        k--;
    }
    for(i=1; i<=n; i++)
    {
        S=S+v[i];
    }
    cout<<S;

    return 0;
}