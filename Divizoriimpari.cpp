#include <iostream>
using namespace std;

long long DivMax(long long x);

int main()
{
    int n;
    cin >> n;
    long long x;
    for(int i = 1 ; i <= n ; ++i)
    {
        cin >> x;
        cout << DivMax(x) << ' ';
    }
    return 0;
}

long long DivMax(long long x)
{
    if(x % 2 == 1) return x;
    else
        while(x % 2 == 0) x/=2;
    return x;
}
