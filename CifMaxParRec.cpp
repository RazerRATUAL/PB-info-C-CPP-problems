#include <iostream>
using namespace std;

int cifmaxpar(int n);
int main()
{
    int m;
    cin >> m;

    cout << cifmaxpar(m);

    return 0;
}

int cifmaxpar(int n)
{
    if (n < 10)
    {
        if (n % 2 == 0)
            return n;

        else
            return -1;
    }

    else
    {
        int x = cifmaxpar(n / 10);
        if (n % 2 == 1)
            return x;

        else if (x == -1)
            return n % 10;

        else
        {
            if (x > n % 10)
                return x;

            else
                return n % 10;
        }
    }
}
