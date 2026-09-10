#include <iostream>
using namespace std;

// Cifrele unui numar
// Cifra de control

/*
 * Cifra de control = n % 9, daca n % 9 != 0
 *                  = 9, n % 9 == 0
 *                  = 0, n == 0
 *
 */

int main(){
    int n;
    cin >> n;
    if(n % 9 == 0)
        cout << 9;
    else cout << n % 9;
    return 0;
}