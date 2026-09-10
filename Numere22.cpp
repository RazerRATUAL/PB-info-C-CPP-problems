#include <iostream>
using namespace std;

int NrDiv(int n);
int a[1001];
int cnt1 = 0, cnt2 = 0;
int p, q;

int main(){
    int n;
    cin >> p >> q;
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    cout << NrDiv(n) << endl;
    return 0;
}

int NrDiv(int n){
    for(int i = 1; i <= n; ++i){
        while(a[i] % p == 0){
            cnt1++;
            a[i] /= p;
        }
        while(a[i] % q == 0){
            cnt2++;
            a[i] /= q;
        }
    }
    return min(cnt1, cnt2);
}