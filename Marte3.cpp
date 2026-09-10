#include <iostream>
using namespace std;

int main()
{
    int x, y, n, a, z, h;
    cin >> x >> y >> n;
    a = n / (x * y);
    z = (n % (x * y)) / y;
    h = (n % (x * y)) % y;
    cout << a << '\n' << z << '\n' << h;
    return 0;
}





