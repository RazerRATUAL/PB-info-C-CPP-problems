#include <iostream>
#include <cmath>

using namespace std;

void inserare(int& n)
{
    int m = 0, p = 1;
    while(n > 9)
    {
        m += p* ( n % 10);
        p *= 10;
        m += p * abs(n % 10 - (n / 10) % 10);
        p *= 10;
        n /= 10;
    }
    m += p * n;
    n = m;
    return;
}
int main()
{
    int n;
    cin >> n;

    inserare(n);

    cout << n;

    return 0;
}
