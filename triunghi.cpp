#include <iostream>
using namespace std;

int main ()
{
    double a, b, c;
    cin >> a >> b >> c;

    if (a > 0 && b > 0 && c > 0
        && a + b > c
        && b + c > a
        && c + a > b)
        cout << "da";
    else
        cout << "nu";
    return 0;
}
