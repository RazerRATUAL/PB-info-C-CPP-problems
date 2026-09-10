#include <iostream>
using namespace std;

int main()
{
    long long int a , b;
    cin >> a >> b;
    long long int n = a , m = b;
    while(b)
    {
        long long int r = a % b;
        a = b;
        b = r;
    }
    cout << n / a + m / a2 - 2;
    return 0;
}
