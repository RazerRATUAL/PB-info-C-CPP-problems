#include <iostream>
using namespace std;

int main()
{
    int x, a, b, c;
    cin >> x;
    a = x / 100;
    b = x % 10;
    c = (x % 100 - x % 10) / 10;
    if ( a % 2 == 0 && b % 2 == 0 && c % 2 == 0)
        cout << 0;
    if ( a % 2 == 0 && b % 2 == 0 && c % 2 != 0)
        cout << 1;
    if ( a % 2 != 0 && b % 2 == 0 && c % 2 == 0)
        cout << 1;
    if ( a % 2 == 0 && b % 2 != 0 && c % 2 == 0)
        cout << 1;
    if ( a % 2 != 0 && b % 2 != 0 && c % 2 == 0)
        cout << 2;
    if ( a % 2 != 0 && b % 2 == 0 && c % 2 != 0)
        cout << 2;
    if ( a % 2 == 0 && b % 2 != 0 && c % 2 != 0)
        cout << 2;
    if ( a % 2 != 0 && b % 2 != 0 && c % 2 != 0)
        cout << 3;

    return 0;
}

