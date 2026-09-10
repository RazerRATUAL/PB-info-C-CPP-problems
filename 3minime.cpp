#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    long long n, v[1002];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }
    sort(v + 1, v + n + 1);
    cout << v[3] << " " << v[2] << " " << v[1];
    return 0;
}