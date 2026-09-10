#include <iostream>
using namespace std;

int Cmmdc (int a, int b);

int main()
{
    int n;
    cin >> n;
    int cmmdc;
    int b;
    cin >> cmmdc;
    for (int i = 2; i <= n; ++i)
    {
        cin >> b;
        cmmdc = Cmmdc(cmmdc, b);
    }
    cout << cmmdc;

}

int Cmmdc (int a, int b)
{
    int rest;
    while (b)
    {
        rest = a % b;
        a = b;
        b = rest;
    }
    return a;
}
