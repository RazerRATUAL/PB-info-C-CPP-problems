#include <iostream>
using namespace std;

// Cifrele unui numar
// asociat_par

int asociat_par(int n){
    int nr_nou = 0, p = 1;
    bool contine_cifre_pare = false;
    do{
        int c = n % 10;
        if(c % 2 == 0){
            contine_cifre_pare = true;
            nr_nou = nr_nou + c * p;
            p *= 10;
        }
        n /= 10;
    }while(n != 0);
    if(!contine_cifre_pare)
        return -1;
    return nr_nou;
}

int oglindit(int n){
    int ogl = 0;
    while(n != 0){
        ogl = ogl * 10 + n % 10;
        n /= 10;
    }
    return ogl;
}

bool este_palindrom(int n){
    return n == oglindit(n);
}

int main(){

    int n, x, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> x;
        if (asociat_par(x) != -1 && este_palindrom(asociat_par(x)))
            cnt++;
    }
    cout << cnt;

    return 0;
}