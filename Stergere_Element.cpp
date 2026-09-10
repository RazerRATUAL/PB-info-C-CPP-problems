#include <iostream>
using namespace std;

const int Dim = 1501;
int a[Dim];

int main()
{
    int n, p;
    cin >> n >> p;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = p; i < n; ++i)
        a[i] = a[i + 1];

    --n;

    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';


    return 0;
}
