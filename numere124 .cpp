#include <iostream>

using namespace std;

int n,c,lim,x[11],p[11],num[11];

void afisare ()
{
    for (int i=1; i<=c; ++i) 
    cout <<num[x[i]];
    cout <<"\n";
}

void bectreching (int k)
{
    for (int i=1; i<=lim; ++i)
    {
        if (!p[i])
        {
            x[k]=i;
            p[i]=1;
            if (num[x[1]]!=0)
                if (k<c) bectreching (k+1);
                else afisare();
            p[i]=0;
        }
    }
}

int main ()
{
    cin>>n>>c;
    while (n){
        num[++lim]=n%10;
        n/=10;
    }
    for (int i=1; i<=lim; ++i)
        for (int j=i+1; j<=lim; ++j)
            if (num[i]>num[j]) swap(num[i],num[j]);
    bectreching (1);
}