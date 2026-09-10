#include <iostream>
using namespace std;

int  nrmaxim(int n);

int main()
{
    int a;
    cin >> a;
    cout << nrmaxim(a);

    return 0;
}

int nrmaxim(int n)
{
    int max, nrcif = 0, aux, p = 1,r, c;
    int maxim = n;
    aux = n;

    while(aux)
    {
        nrcif++;
        p = p * 10;
        aux /= 10;
    }
    p = p / 10;


    while(nrcif > 1)
    {
        r = n % p;
        c = n / p;
        n = r * 10 + c;
        if(n > maxim)
            maxim = n;
        nrcif--;
    }
    return maxim;
}
