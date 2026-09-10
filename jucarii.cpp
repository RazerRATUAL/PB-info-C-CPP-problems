#include <iostream>
using namespace std;
int main()
{
    int n , m;
    cin >> m >> n;
    if(m > n) cout << 0;
    else
    {
        long long p = 1;
        for(int i = 1 ; i <= m ; ++i)
        {
            p *= (n - m + i);
            if(p > 224737) 
                p %= 224737;
        }
        cout << p % 224737;
    }
}