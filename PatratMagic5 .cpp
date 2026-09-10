#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long double n;
    cin >> n;
    long double x = n * n;
    cout << fixed << setprecision (0) << ((x + 1) * (x /2)) / n;

    return 0;
}

