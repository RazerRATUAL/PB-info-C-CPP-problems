#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    long long n;
    long long p;
    cin >> n >> p;
    cout << "1" << " " << n << " ";

    for (long long i = n; n * i <= p;i*=n )

    cout << n * i << " ";

    return 0;
}
