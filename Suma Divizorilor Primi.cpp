#include <iostream>
using namespace std;

void sum_div_prim(int n, int& s);

int main()
{
    int n;
    int s;
    cin >> n;
    cout << s;

    return 0;
}
bool Prim(int x)
{
    if(x < 2) return false;
    if(x == 2) return true;
    if(x % 2 == 0) return false;
    for (int i = 3; i * i <= x; i = i + 2)
        if( x % i == 0) return false;
    return true;
}

void sum_div_prim(int n, int& s)
{
    for(int i = 2; i * i <= n;++i)
        if(n % i == 0)
        {
                if(Prim(i))
                    s += i;
                if(i * i < n && Prim(n / i))
                    s += n / i;
        }
}
