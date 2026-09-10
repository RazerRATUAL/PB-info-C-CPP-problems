#include <iostream>
#include <cmath>
using namespace std;
bool PrimBOSS(int n) {
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (int i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

int mod(int S) {
    int cnt = 0;
    for (int i = 2; i <= S / 2; ++i) {
        if (PrimBOSS(i) && PrimBOSS(S - i))
            ++cnt;
    }
    return cnt;
}

void Sol(int S) {
    for (int i = 2; i <= S / 2; ++i) {
        if (PrimBOSS(i) && PrimBOSS(S - i)) {
            cout << min(i, S - i) << " " << max(i, S - i) << endl;
            break;
        }
    }
}

int main() {
    int S;
    cin >> S;

    int nrSol = mod(S);
    cout << nrSol << endl;
    Sol(S);

    return 0;
}
