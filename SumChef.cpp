#include <iostream>

using namespace std;
const int Dim = 2000001;
int a[Dim];
int main() {
int n;
cin >> n;

for (int i = 0; i < n; i++) {
  cin >> a[i];
}
  
int S = 0;

for (int i = 0; i < n; i++) {
    int x = a[i];
    while (x > 0) {
        int cif = x % 10;
        S += cif * cif * cif;
        x /= 10;
    }
}

cout << S << endl;

return 0;
}
