#include <iostream>
using namespace std;

int main()
{
    int a, b, x;
    cin >> a >> b;
    x = a - b;
    if (x == 0)
        cout << "Copiii au varste egale";
    else if (a > b)
        cout << "Primul copil este mai mare cu" << " " << x << " " << "ani";
    else
        cout << "Al doilea copil este mai mare cu" << " " << x * (-1) << " " << "ani";
    return 0;
}
