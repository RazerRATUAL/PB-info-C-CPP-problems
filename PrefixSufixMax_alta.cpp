#include <iostream>
using namespace std;

long long oglindit(int n){
    long long ogl = 0;
    while(n != 0){
        ogl = ogl * 10 + n % 10;
        n /= 10;
    }
    return ogl;
}

bool este_palindrom(int n){
    return n == oglindit(n);
}

int prefix_max(int n){
    while(!este_palindrom(n))
        n /= 10;
    return n;
}

int nr_cif(int n){
    if(n < 10)
        return 1;
    return nr_cif(n / 10) + 1;
}

long long p10(int n){
    long long p = 1;
    for(int i = 1; i <= n; ++i)
        p *= 10;
    return p;
}

int sufix_max(int n){
    long long p = p10(nr_cif(n));
    while(!este_palindrom(1LL * n % p))
        p /= 10;
    return 1LL * n % p;
}

int main(){

    int n;
    cin >> n;
    cout << prefix_max(n) << ' ' << sufix_max(n);

    return 0;
}