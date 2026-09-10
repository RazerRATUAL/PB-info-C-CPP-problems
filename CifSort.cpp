#include <iostream>
using namespace std;

int main()
{
    int n, rez = 0, put = 1;
    cin >> n;
    while(n > 0)
    {
        int a = (n / 10) % 10;
        int b = n % 10;

        int nr = b * 10 + a;
        rez = nr * put + rez;

        n /= 100;
        put *= 100;
    }
    cout << rez;
    return 0;
}
