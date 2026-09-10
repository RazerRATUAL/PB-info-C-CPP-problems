#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int MOD;
int a_la_b;

int main() {

    int b, n, p;
    cin >> b >> n >> p;
    MOD = pow(10, p);
    cout << a_la_b(b, n);

    return 0;
}

int a_la_b(int a, int b){
    if(b == 0)
        return 1;
    int m = a_la_b(a, b/2);
    if(b % 2 == 0)
        return (1LL * m * m) % MOD;
    return (((1LL * m * m) % MOD) * a) % MOD;
}
