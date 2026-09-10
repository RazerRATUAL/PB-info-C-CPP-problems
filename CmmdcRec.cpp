#include <iostream>
using namespace std;

int Cmmdc(int a, int b);

int main()
{
    int a, b;
    cin >> a >> b;
    cout << Cmmdc(a, b);
}

int Cmmdc(int a, int b)
{
    if (b == 0) return a;
    return Cmmdc(b, a % b);
}
