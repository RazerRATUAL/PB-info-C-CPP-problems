#include <iostream>
using namespace std;

long long cmmdc(long long a, long long b);
long long cmmmc(long long a, long long b);

int main() {
    long long n;
    cin >> n;

    long long x = n * 4 - 4;
    long long y = (n - 2) * 4 - 4;
    long long z = (n - 4) * 4 - 4;

    long long a = cmmmc(x, y);
    long long b = cmmmc(a, z);

    cout << b / x << " " << b / y << " " << b / z;
    return 0;
}

long long cmmdc(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return cmmdc(b, a % b);
}

long long cmmmc(long long a, long long b) {
    return a * b / cmmdc(a, b);
}