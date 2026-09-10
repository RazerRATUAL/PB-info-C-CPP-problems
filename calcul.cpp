#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;
    int n = a / 10;
    int m = a % 10;
    if (a <= 15)
        cout << a * a;
    else
    {
        if (a >= 16 && a <= 30)
            cout << a / 10 + a % 10;
        else
            cout << n * m;
    }

    return 0;
}
