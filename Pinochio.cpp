#include <iostream>

using namespace std;

unsigned long long n;
unsigned short k = 1, k2 = 1, k3, p;

int main()
{
    cin >> n >> p >> k3;
    while(k2 <= k3)
    {
        if(k >= 1 && k <= 5)
            n += p;
        else if(k == 6)
            --n;
        else if(k == 7)
        {
            --n;
            k = 1;
        }
        ++k2;
        ++k;
    }
    cout << n << " cm";
    return 0;
}

