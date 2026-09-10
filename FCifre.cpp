#include <iostream>
using namespace std;

int nr_cif (int n, int k);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << nr_cif(a,b);

    return 0;
}
int nr_cif (int n, int k)
{
    int cnt = 0;

    while(n)
    {
        if ((n % 10) != 0 && k % (n % 10) == 0)
            cnt++;

        n /= 10;
    }

    return cnt;
}
