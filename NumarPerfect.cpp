#include <iostream>
using namespace std;

int main()
{
    int n;
    int m = 0;
    cin >> n;
    for (int i = 1;i <= n / 2;i++)
        {
            if (n % i == 0)
                m+=i;
        }
        m = m + n;
        if (m % n == 0)
            cout << n << " " << "este perfect";
        else
            cout << n << " " << "nu este perfect";
    return 0;
}
