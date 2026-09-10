#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    long long suma = 0;
    int n;
    long long x;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        suma += x * x;
    }
    cout << fixed << setprecision(2)
         << sqrt((double)suma / n);

    return 0;
}
