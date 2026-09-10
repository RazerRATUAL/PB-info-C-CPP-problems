#include<iostream>

using namespace std;

void Impare(int &n)
{
    int a[11], x = 0;
    while(n)
    {
        a[x] = n % 10;
        n/=10;
        x++;
    }
    int p = 1;
    for(int i = 0 ; i < x; ++i)
    {
        if(a[i] % 2 == 1)
            a[i] --;
        n = n + a[i] * p;
        p *= 10;
    }
}

int main()
{
    int n;
    cin >> n;

    Impare(n);

    cout << n;

    return 0;
}
