#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int maxi = 10, minp = 0;
    while(n)
    {
        if(n % 2 == 1 && n % 10 < maxi)
            maxi = n%10;
        if(n % 2 == 0 && n % 10 > minp)
            minp = n % 10;
        n/=10;
    }
    cout << maxi * minp;
    return 0;
}
