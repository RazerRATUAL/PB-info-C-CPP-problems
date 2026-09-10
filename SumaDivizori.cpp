#include <iostream>
#include <cmath>
using namespace std;

long long SumDiv (int n);

int main()
{
    int x;
    cin >> x;

    cout << SumDiv(x);
    return 0;
}

long long SumDiv (int n)
{
    long long sd = 0;
    int p;

    for (int d = 1; d * d <= n; d++)

        if (n % d == 0)
        {
            if (d % 2 == 0)
            sd += d;

            p = n / d;

            if (p != d && p % 2 == 0)
                sd += p;
        }
    return sd;


}
