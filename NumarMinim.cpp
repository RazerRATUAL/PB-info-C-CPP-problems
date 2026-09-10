#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    cout << 1;
    for(int i = 1; i <= n - 2; i++)
        cout << 0;
    cout << (k - 1 + 9) % 9;
}

// nigga balls