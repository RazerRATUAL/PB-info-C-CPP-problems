#include <iostream>
#include <cmath>
using namespace std;

const int Dim = 55;
void Citire(int &n, int a[Dim]);
void PP(int &n, int a[Dim]);
void afisare(int n, int a[Dim]);

int main() {
    int n;
    int a[Dim];

    Citire(n, a);
    PP(n, a);
    afisare(n, a);

    return 0;
}

void Citire(int &n, int a[Dim]) {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
}

void PP(int &n, int a[Dim]) {
    for (int i = 1; i <= n; i++) {
        if (sqrt(a[i]) == int(sqrt(a[i]))) {
            for (int j = n; j >= i; j--)
                a[j + 1] = a[j];

            n++;
            a[i] = sqrt(a[i]);
            i++;
        }
    }
}

void afisare(int n, int a[Dim]) {
    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
}

