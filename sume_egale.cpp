#include <iostream>

using namespace std;
int a[32];
int sume_egale(int n, int a[], int s1, int s2, int poz) {
    if (poz == n) {
        if (s1 == s2)
            return 1;
        else
            return 0;
    }

    a[poz] = 1;
    int cnt = sume_egale(n, a, s1 + poz + 1, s2, poz + 1);

    a[poz] = 0;
    cnt += sume_egale(n, a, s1, s2 + poz + 1, poz + 1);

    return cnt;
}

int main() {
    int n;
    cin >> n;

    int s1 = sume_egale(n, a, 0, 0, 0) / 2;

    cout << s1 << endl;

    return 0;
}
