#include <iostream>
using namespace std;

long long nr_cif_zero(long long n);

int main()
{
    long long a;
    cin >> a;
    cout << nr_cif_zero(a);

    return 0;
}

long long nr_cif_zero(long long n)
{
    long long cif = 0;
    if (x == 0)
        return 1;
    while(n)
    {
        if(n % 10 == 0)
            cif++;

        n /= 10;
    }
    return cif;
}
