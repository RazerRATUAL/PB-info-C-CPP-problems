#include <iostream>
using namespace std;

int sum_cifra_control(int a, int b);

int main()
{
    int x, y;
    cin >> x >> y;
    cout << sum_cifra_control(x, y);
}
int sum_cifra_control(int a, int b)
{
    return ((b - a) / 9) + 1;
}
