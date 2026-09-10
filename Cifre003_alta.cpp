#include <iostream>
using namespace std;

// Cifrele unui numar
// cifre003

// 23701 => 23701 / 1000 * 100 + 23701 % 100

int main(){

    int n;
    cin >> n;
    long long p = 10, cnt = 0;
    while(p / 10 <= n){
        if((n / p * (p / 10) + n % (p / 10)) % 3 == 0)
            cnt++;
        p *= 10;
    }
    cout << cnt;

    return 0;
}