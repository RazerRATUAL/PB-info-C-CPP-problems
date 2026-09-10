#include <iostream>
using namespace std;

int prim(int n);

int main(){
    int n, i, x;
    long long s = 0;
    cin >> n;
    for(i = 1; i <= n; i++){
            cin >> x;
            s += prim(x);
            }
    cout<<s;
    return 0;
}

int prim(int n){
    int f = 1, p, maxx = f;
    while(n > 1){
        p = 0;
        if(f * f > n)
            f = n;
        while(n % f == 0){
            p++;
            n /= f;
        }
        if(p)
            if(f > maxx)
            maxx = f;

        f++;
    }
    return maxx;
}