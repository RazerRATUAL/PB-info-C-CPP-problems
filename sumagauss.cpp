#include <iostream>
using namespace std;

int main()
{
    long long S = 0;
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        S+= (long long) i;

    cout << S;

    return 0;
}
