#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int prima_cifra, cn, cnt = 0;
    if(n == 0)
        cout << 1;
    else
    {
        cn = n;
        while(n > 9)
            n/=10;
        prima_cifra = n;
        n = cn;
        while(n > 0)
            {
            if(n % 10 == prima_cifra)
                cnt++;
            n/=10;
            }
        cout << cnt;
    }
    return 0;
}
