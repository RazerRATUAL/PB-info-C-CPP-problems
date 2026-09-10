#include <iostream>
using namespace std;

int sumcif(int n);

int main()
{
    int n;
    cin >> n;
    cout << sumcif(n);
}

int sumcif(int n)
{
    if (n == 0) return 0;
    return n % 10 + sumcif(n / 10);
}
