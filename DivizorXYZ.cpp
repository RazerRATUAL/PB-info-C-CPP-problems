#include <iostream>

using namespace std;

int main() {
    long long int n;
    cin >> n;
    if (n % 6 == 0)
        cout << 1LL * n / 6 << ' ' << 1LL * n / 3 << ' ' << 1LL* n / 2 << endl;
    else cout << "nu exista";
}