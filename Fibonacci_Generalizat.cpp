#include <iostream>
using namespace std;


int main(){
    long long int n, a, b;
    cin >> a >> b >> n;
    if((a < 0 && -a <= n) || (a >= 0 && a <= n))
        cout << a << " ";
    if((b < 0 && -b <= n) || (b >= 0 && b <= n))
        cout << b << " ";
    int f = 0;
    while(f <= n)
    {
        f = b + a;
        a = b;
        b = f;
        if(((f < 0) && (-f <= n)) || (f >= 0 && f <= n))
            cout << f << " ";
    }

    return 0;
}