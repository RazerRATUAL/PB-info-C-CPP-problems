#include <iostream>

using namespace std;

void prefix(int n, int k, int& x)
{
    int aux = n, nrc = 0;
    while(aux)
    {
        aux /= 10;
        nrc++;
    }
    k = nrc - k;
    while(k)
    {
        n = n / 10;
        k--;
    }
    x = n;
}

int main()
{
    int n, k, x;
    cin >> n >> k >> x;

    prefix(n, k, x);

    cout << x;

    return 0;
}

