#include <iostream>
using namespace std;
int v[33];
void valuri(int n, int v[])
{
    int i;
    for (i = 0; i < 2 * n; i += 2)
        v[i] = i + 1;
    for (i = 1; i < 2 * n; i += 2)
        v[i] = (n - i / 2) * 2;
}

int main()
{
    int n;
    cin >> n;
    valuri(n, v);
    return 0;
}