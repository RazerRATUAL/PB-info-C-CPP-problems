#include <iostream>
#include <algorithm>
using namespace std;
struct magazin
{
    int p, c;
};
magazin arr[101];
int n, m, S, bc, cnt, gr;

bool compare(magazin a, magazin b)
{
    if(a.p != b.p)
        return a.p < b.p;
    return (a.c > b.c);
}

int main()
{
    int i;
    cin>>n>>m;
    for(i=1; i<=m; ++i)
    {
        cin>>arr[i].p>>arr[i].c;
        bc+=arr[i].c;
    }
    if(bc<n)
    {
        cout<<"imposibil";
        return 0;
    }
    sort(arr+1,arr+1+m, compare);
    i=1;
    while(i<=m)
    {
        if(gr+arr[i].c<=n)
        {
            gr+=arr[i].c;
            S+=arr[i].p*arr[i].c;
        }
        else
        {
            int c=0;
            while(c<arr[i].c && gr<n)
            {
                S+=arr[i].p;
                c++;
                gr++;
            }
            if(gr==n)
                break;
        }
        ++i;
    }
    cout<<S;
    return 0;
}