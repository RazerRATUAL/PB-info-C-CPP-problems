#include <iostream>

using namespace std;

int n,k,x[21];

void afisare ()
{
    bool ok=true;
    for (int i=1; i<k; ++i)
    {
        if (x[i]%2==0 && x[i+1]%2==0){
            ok=false;
            break;
        }
    }
    if (ok){
        for (int i=1; i<=k; ++i) cout<<x[i]<<" ";
        cout<<"\n";
    }
}

void bectreching (int pas)
{
    for (int i=x[pas-1]+1; i<=n-k+pas; ++i)
    {
        x[pas]=i;
        if (pas<k) bectreching(pas+1);
        else afisare();
    }
}

int main()
{
    cin>>n>>k;
    bectreching(1);

    return 0;
}