#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c;
    if(b > a)
    {
    d = a;
    a = b;
    b = d;
    }
    if(c > a)
    {
    d = a;
    a = c;
    c = d;
    }
    if(c > b)
    {
    d = b;
    b = c;
    c = d;
    }
    cout << a - c;
    return 0;
}

