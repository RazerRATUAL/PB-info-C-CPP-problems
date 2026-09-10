#include <iostream>
using namespace std;

int a[200001], poz[200001], n, r;

int celMaiMareMaiMicSauEgal(int a[], int n, int val){
    int poz = n + 1;
    int st = 1, dr = n;
    while(st <= dr){
        int mij = (st + dr) / 2;
        if(a[mij] <= val){
            poz = mij;
            dr = mij - 1;
        }
        else st = mij + 1;
    }
    return poz;
} 

int main() {

    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> a[i];
        if(i == 1)
            poz[i] = 1;
        else if(a[i] == a[i-1])
            poz[i] = poz[i-1];
        else poz[i] = poz[i-1] + 1;
    }
    cin >> r;
    for(int i = 1, x; i <= r; ++i){
        cin >> x;
        int p = celMaiMareMaiMicSauEgal(a, n, x);
        if(p == n + 1)
            cout << poz[n] + 1 << '\n';
        else cout << poz[p] << '\n';
    }

    return 0;
}