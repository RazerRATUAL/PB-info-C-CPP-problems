#include <iostream>
#include <cmath>

using namespace std;

int cifmax(int n);

int main()
{
    int n;
    cin >> n;
    cout << cifmax(n);
}

int cifmax(int n)
{
    if (n == 0)
        return 0;

    return max(n % 10, cifmax(n / 10));
}
