#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long int a;
    cin >> a;
    long long int val = a*a + a*a*a*a;
    long long int n = 3 * val;
    double m = val + (double)sqrt(val);
    double p = (double)sqrt(val);
    double valo = n / m + p;
    cout << (int) valo;
    return 0;
}
