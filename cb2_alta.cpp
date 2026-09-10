#include <iostream>
using namespace std;

int sp[100001], maxp[100001], n, x, s, Q;

int celMaiMareMaiMicSauEgal(int a[], int n, int val){
    int st = 1, dr = n, poz = 0;
    while(st <= dr){
        int mij = (st + dr) / 2;
        if(a[mij] <= val){
            poz = mij;
            st = mij + 1;
        }
        else dr = mij - 1;
    }
    return poz;
}

int main(){

    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> x;
        sp[i] = sp[i-1] + x;
        maxp[i] = max(maxp[i-1], x);
    }
    cin >> Q;
    for(int i = 1; i <= Q; ++i){
        cin >> x >> s;
        int p1 = celMaiMareMaiMicSauEgal(maxp, n, x);
        int p2 = celMaiMareMaiMicSauEgal(sp, n, s);
        cout << min(p1, p2) << '\n';
    }

    return 0;
}