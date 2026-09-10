#include <iostream>
using namespace std;

// Cifrele unui numar
// cifre003

int sum_cif(int n){
    int sum = 0;
    while(n){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){

    int n;
    cin >> n;
    int sum = sum_cif(n), cnt = 0;
    while(n){
        int c = n % 10;
        if((sum - c) % 3 == 0)
            cnt++;
        n /= 10;
    }
    cout << cnt;

    return 0;
}