#include <cmath>
#include <iostream>

using namespace std;

void FRadical(int n, int &x, int &y)
{
    y = 1; x = 0;
    int r;

    do
    {
        if(n % y == 0)
        {
            r = sqrt(n / y);
            if(r * r == n / y)
            {
                x = r;
                return;
            }
        }
        y++;
    }
    while(x == 0);
}

int main()
{
    int n, a, b;
    cin >> n;
    FRadical(n, a, b);

    cout << a << ' '<< b;

    return 0;
}
