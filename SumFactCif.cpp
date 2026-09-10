#include <iostream>
using namespace std;

int sumfactcif(int n);

int main()
{
    int a;
    cin >> a;
    cout << sumfactcif(a);

}

int sumfactcif(int n)
{
    if(n == 0)
        return 1;

    int f[10];
    f[0] = 1;
    for(int i = 1; i <= 9; ++i)
        f[i] = f[i - 1] * i;
    int s = 0;
    while(n)
    {
        s = s + f[n % 10];
        n = n / 10;
    }
    return s;
}
