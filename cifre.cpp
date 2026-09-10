#include <iostream>
using namespace std;

int main()
{
    long n;
    cin >> n;
    int s;
    s = n % 10 + (n % 100 - n % 10) / 10;
    cout << s;
    return 0;
}
