#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a , b , d;
    cin >> a >> b >> d;
    if(a < b)
        swap(a , b);
    int x;
    int ms = abs(b * b - a * a + d * d);
    x = ms / (2 * d);
    cout << x;
    return 0;
}
