#include <iostream>
using namespace std;

int cmmnr(int n);

int main()
{
    int a;
    cin >> a;
    cout << cmmnr(a);

    return 0;
}

int cmmnr(int n)
{
    int f[10] = {0};

    while(n)
    {
        f[n % 10]++;
        n /= 10;
    }
    for (int i = 9; i >= 0; --i)
        while(f[i])
    {
        n = n * 10 + i;
        f[i]--;
    }
    return n;
}
