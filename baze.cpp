#include <iostream>
using namespace std;

int main()
{
    int n, b, c;
    cin >> n >> b >> c;

    int N = 0;
    int uc;
    int P = 1;
    while (n)
    {
        uc = n % 10;
        N += uc * P;
        P *= b;
        n /= 10;
    }

    int d[100];
    int k = 0;

    while(N)
    {
        d[++k] = N % c;
        N /= c;
    }

    for(int i = k; i >= 1; --i)
        cout << d[i];

    return 0;
}
