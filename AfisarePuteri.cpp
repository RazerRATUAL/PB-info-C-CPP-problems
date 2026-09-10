#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{

    int n, p;
    cin >> n >> p;
    int a;

    cout << "1" << ' ';

    for (int a = 1; a <= p;)
    {
        if (a * n > p)
            break;
        else
        {
            a *= n;
            cout << a << ' ';
        }

    }

    return 0;
}

