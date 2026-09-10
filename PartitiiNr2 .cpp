#include<iostream>
using namespace std;
int x[100]={0},n;

void afisare(int n)
{
for(int i=1;i<=n;++i)
    cout<<x[i]<<' ';
cout<<'\n';
}

int verif(int i)
{
    if(i>1&&x[i]<x[i-1])
        return 0;
    if(i>1&&x[i]-x[i-1]>2)
        return 0;
    return 1;
}

void back(int i,int s)
{
    for(int j=x[i-1]+1;j<=s;++j)
    {
        x[i]=j;
        if(verif(i))
        {
            if(x[i]==s)
                afisare(i);
            else
                back(i+1,s-x[i]);
        }
    }
}

int main()
{
    cin>>n;
    back(1,n);
    return 0;
}