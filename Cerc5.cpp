#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int n, x[36], s[36], nrsol;

bool pp(int a)
{
    if(sqrt(a)!=(int)sqrt(a)) return false;
    return true;
}

bool ok(int k)
{
    if(s[x[k]]) return false;
    if(k>1 && !pp(x[k-1]+x[k])) return false;
    if(k==n && !pp(x[1]+x[k])) return false;
    return true;
}

void Afisare()
{
    nrsol++;
    for(int i=1;i<=n;++i)
        cout<<x[i]<<" ";
}

void Back(int k)
{
    if(nrsol==1) return;
    if(k==n+1)
    {
        Afisare();
        return;
    }
    for(int i=1;i<=n;++i)
    {
        x[k]=i;
        if(ok(k))
        {
            s[i]=1;
            Back(k+1);
            s[i]=0;
        }
    }
}

int main()
{
    cin>>n;
    Back(1);
    if(!nrsol)
        cout<<"nu exista";
    return 0;
}