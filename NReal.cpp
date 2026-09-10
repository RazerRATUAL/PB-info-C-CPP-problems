#include <iostream>
#include <cmath>
using namespace std;

double nreal(double x, double y);

int main()
{
    double a, b;
    cin >> a >> b;
    cout << nreal(a,b);

    return 0;
}

double nreal(double x, double y)
{
    double nr, zecimale, nou;
    while(y >= 1)
    {
        y /= 10;
        ++zecimale;
    }
    nr = x + y;

    return nr;
}
