#include <iostream>
using namespace std;

int main()
{
    long long n, C;
    cin >> n;
    C = 1 + 6 * n * (n - 1) / 2 ;
    cout << C;

    return 0;
}
