#include <iostream>
using namespace std;
int main ()
{
    long long int n, aux, p = 1, maxim = 0;
    cin >> n;
    while (p <= n)
    {
        aux=n/(p*10)*p + n%p;
        if (aux > maxim)
            maxim = aux;
        p *= 10;
    }
    cout << maxim;
    return 0;
}