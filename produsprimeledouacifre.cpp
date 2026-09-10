#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    while(n > 99)
        n /= 10;
    cout << (n / 10) * (n % 10);
}
