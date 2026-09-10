#include <iostream>
#include <cmath>
using namespace std;

int s;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i)
    {
        int p = pow(i, 2);
        s += p;
        cout << s << ' ';
    }
    return 0;
}
