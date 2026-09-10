#include <iostream>

using namespace std;

unsigned long long n, k;
bool ok = true;

int main()
{
    cin >> n >> k;
    while(n)
    {
        if(n % 10 <= k)
            n /= 10;
        else
        {
            ok = false;
            break;
        }
    }
    if(ok == true)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}
