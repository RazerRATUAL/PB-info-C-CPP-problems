#include <iostream>
using namespace std;
int main ()
{
    long long n,maxim=0,nrap=0,aux;
    cin >> n;
    aux=n;
    if (n==0) cout << 0<<" "<<1;
    else
        {
    while (n != 0)
    {
        if((n%10)>maxim)
        {
            maxim=n%10;
        }
        n=n/10;
    }
    while (aux !=0 )
    {
        if((aux%10)==maxim) nrap++;
        aux=aux/10;
    }

    cout << maxim << " "<< nrap;
        }
}
