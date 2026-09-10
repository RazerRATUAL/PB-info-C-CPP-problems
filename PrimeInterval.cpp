#include <iostream>
using namespace std;

int prim(int n);

int main ()
{
    int a, b, cnt = 0;
    cin >> a >> b;
    if (a > b)
    {
        int c = a;
        a = b;
        b = c;
    }
    for (int i = a ; i <= b; ++i)
    {
        if (prim(i))
        cnt++;
    }
    cout << cnt;
    return 0;
}
int prim(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; ++i)
    {
        if (n % i == 0)
        cnt += 2;
        if (i * i == n)
        cnt--;
    }
    if (cnt == 2)
    return 1;
    else
    return 0;
}
