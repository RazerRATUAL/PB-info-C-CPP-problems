#include <iostream>

using namespace std;

int main ()
{
    long long n;
    long long min=1000001;
    cin >> n;
    if (n > 0)
    min = n;
    while (n)
    {
    cin >> n;
    if (n > 0 && n < min)
    min = n;
    }
    if (min == 1000001)
    cout << "NU EXISTA";
    else
    cout << min;
    return 0;
}
