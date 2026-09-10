#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (sqrt(n) == (int)sqrt(n))
        cout << "da";
    else
        cout << "nu";
    return 0;
}
