#include <iostream>
using namespace std;

void sum_cif(int n, int& scif);

int main()
{
    int n, scif;
    int& sum = scif;
    cin >> n;

    sum_cif(n, sum);

    cout << scif;

    return 0;
}

void sum_cif(int n, int& scif)
{
    scif = 0;
    while(n)
    {
        scif += (n % 10);
        n/=10;
    }
}
