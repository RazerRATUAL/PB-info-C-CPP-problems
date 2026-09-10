#include <iostream>
using namespace std;

int x[201];
int y[201];
long long s;

int main()
{
    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i)
    {
        cin >> x[i];
        s += x[i];
    }

    for(int i = 1; i <= n; ++i)
        y[i] = s - x[i];
    for(int i = 1; i <= n; ++i)
        cout << y[i] << ' ';
    return 0;
}
