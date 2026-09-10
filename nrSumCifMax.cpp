#include <iostream>
using namespace std;

int sc(int a)
{
    int s = 0;
    while(a) s+=a%10, a/=10;
    return s;
}

int main()
{
    int a, b, c, maxi = 0;
    cin >> a >> b >> c;
    if(sc(a) > maxi)
        maxi = sc(a);
    if(sc(b) > maxi)
        maxi = sc(b);
    if(sc(c) > maxi)
        maxi = sc(c);
    if(sc(a) == maxi)
        cout << a << ' ';
    if(sc(b) == maxi)
        cout << b << ' ';
    if(sc(c) == maxi)
        cout << c << ' ';
    return 0;
}
