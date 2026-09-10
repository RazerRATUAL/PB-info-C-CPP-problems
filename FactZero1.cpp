#include <iostream>
using namespace std;

int legendre(int n, int d);

int main(){

    int n, rez = 1;
    cin >> n;
    int put5 = legendre(n,5);
    for(int i = 2; i <= n; ++i){
        int ci = i;
        while(ci % 2 == 0 && put5 != 0)
            ci /= 2, put5 --;
        while(ci % 5 == 0)
            ci /= 5;
        rez = rez * ci;
        rez %= 10;
    }
    cout << rez;

    return 0;
}

int legendre(int n, int d){
    int putd = d;
    int cnt = 0;
    while(n >= putd){
        cnt += n / putd;
        putd *= d;
    }
    return cnt;
}
