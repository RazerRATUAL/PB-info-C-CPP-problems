#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double n;
    cin >> n;
    double pi = 3.14159265359;
    cout << fixed << setprecision(10) << (double) pi * (n * n) << ' ';
    cout << fixed << setprecision(10) << (double) pi * (2 * n) << ' ';
    return 0;
}
