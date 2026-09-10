#include <iostream>
using namespace std;

int main()
{
    int a, n, b;
    cin >> n >> a >> b;
    int r = n % a;
    
    while(r % b != 0)
    r += a;

    n = n - r;

    for (int i = 1; i <= n/a; ++i)
    cout << a << " ";

    for(int i = 1; i <= r/b; ++i)
        cout << b << " ";
}