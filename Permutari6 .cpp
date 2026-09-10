#include<iostream>
using namespace std;

int a,b,n,x[9];

void Afisare()
{
    int i;
    for(i=1;i<=n;i++)
        cout<<x[i]<<" ";
    cout<<"\n";
}

int Valid(int k)
{
    int i;
    for(i=1;i<k;i++)
        if(x[i]==x[k])
            return 0;
    return 1;
}

void Backtracking(int k)
{
    if(k>n)
        Afisare();
    else
    {
        int i;
        for(i=a;i<=b;i++)
        {
            x[k]=i;
            if(Valid(k))
                Backtracking(k+1);
        }
    }
}

int main()
{
    cin>>a>>b;
    n=b-a+1;
    Backtracking(1);
    return 0;
}