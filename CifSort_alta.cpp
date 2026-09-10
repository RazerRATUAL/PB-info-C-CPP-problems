#include <iostream>
using namespace std;

// Cifrele unui numar
// cifsort

int cifsort(int n){
    int nr_nou = 0, p = 1;
    while(n != 0){
        int a = n % 100;
        a = (a % 10) * 10 + a / 10;
        nr_nou = nr_nou + a * p;
        p *= 100;
        n /= 100;
    }
    return nr_nou;
}

/*
 * Implementare Recursiva
 *
 * cs(n) = 0, n == 0
 * cs(n) = cs(n / 100) * 100 + (n % 10) * 10 + (n / 10) % 10 , n > 0
 *
 * Model Matematic
 */

int cifsort_rec(int n){
    if(n == 0)
        return 0;
    return cifsort_rec(n / 100) * 100 + (n % 10) * 10 + (n / 10) % 10;
}

int main(){

    int n;
    cin >> n;
    cout << cifsort_rec(n);

    return 0;
}