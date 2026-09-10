#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cn = n;
    int sum = 0;
    while (n)
    {
        sum += (n % 10) * (n % 10);
        n /= 10;
    }
    n = cn;
    cout << sum << ' ';
    sum = 0;
    while (n)
    {
        if (n % 2 == 1)
            sum += n % 10;
        n /= 10;
    }
    n = cn;
    cout << sum << ' ';
    sum = 0;
    while (n)
    {
        if (n % 10 % 3 == 0)
            sum += n % 10;
        n /= 10;
    }
    cout << sum << ' ';
    n = cn;
    sum = 0;
    while (n)
    {
        if (n % 10 > 5)
            sum++;
        n /= 10;
    }
    cout << sum << ' ';
    n = cn;
    sum = 1;
    while (n)
    {
        if (n % 10 != 0)
            sum *= n % 10;
        n /= 10;
    }
    cout << sum << ' ';
    sum = 0;
    n = cn;
    sum = n % 10;
    while(n > 9)
        n/=10;
    cout << sum + n;
    return 0;
}
