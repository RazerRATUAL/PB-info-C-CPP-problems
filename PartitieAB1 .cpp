#include <iostream>
using namespace std;

int main()
{
    int a, n, b;
    cin >> n >> a >> b;
    int r = n % b;
    
    while(r % a != 0)
    r += b;

    n = n - r;

    for (int i = 1; i <= r/a; ++i)
    cout << a << " ";

    for(int i = 1; i <= n/b; ++i)
        cout << b << " ";
}