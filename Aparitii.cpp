#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    int cnt = 0;
    int u = n % 10;
    if (n == 0)
    cnt++;
    while (n)
    {
    if (n % 10 == u)
    cnt ++;
    n/=10;
    }
    cout << cnt;
    return 0;
}
