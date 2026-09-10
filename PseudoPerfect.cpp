#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    int s=0;
    for (int i = 1 ; i*i <= n;++i )
    {
        if (n%i == 0)
        {
        s+=i;
        s+=n/i;
        }
        if (i*i == n)
        s-=i;
    }
    if (s%n == 0)
    cout << "DA";
    else
    cout << "NU";
    return 0;
}
