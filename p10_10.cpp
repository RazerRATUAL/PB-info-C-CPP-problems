#include <iostream>
using namespace std;

int main ()
{
    int n, k;

    cin >> n >> k;

    int z = 0;
    while (n > 9)
    {
        z++;
        n/= 10;
    }

    cout << 1;

    for (int i = 1; i <= k * z; ++i)
        cout << 0;

    return 0;
}
