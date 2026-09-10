#include <iostream>
using namespace std;

int main()
{
    int n, b, sol = 0, Max = 0;

    cin >> n >> b;
    for(int i = 1; n; i *= 10, n /= b) {
        if((n % b) > Max) 
        Max = n % b;
        sol += i * (n % b);
    }
    cout << Max << '\n';
  return 0;
}