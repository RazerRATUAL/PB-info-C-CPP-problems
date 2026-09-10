#include <fstream>
using namespace std;
ifstream cin("matrice.in");
ofstream cout("matrice.out");
// ModifMat

void citire(int a[][51], int &n){
    cin >> n;
    for(int i = 1; i<= n;++i)
        for(int j = 1; j<= n;++j)
        cin >> a[i][j];
}

void afisare(int a[][51], int n){
    for(int i = 1; i<= n;++i){
        for(int j = 1; j<= n;++j)
            cout << a[i][j] << " ";
        cout << endl;
    }
}

void interschimbare_Z1_Z3(int a[][51], int n){
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j<= n; ++j)
            if(i < j && i + j <= n)
                swap(a[i][j], a[n - i +1][j]);
}

int nr_cif(int n){
    int cnt = 1;
    while(n > 9){
        cnt++;
        n/= 10;
    }   
return cnt;
}

int putere(int a, int b){
    int r = 1;
    while (b) {
        if (b % 2 == 1)
        r *= a;
        a *= a;
        b /= 2;
    }
    return r;
}

bool este_prim(int n){
    if(n == 0 || n == 1)    return false;
    if(n == 2)  return true;
    if(n % 2 == 0)  return false;
    int d = 3;
    while(d * d <= n){
        if(n % d == 0){
            return false;
        }
        d += 2;
    }

return true;
}

bool este_superprim(int n){
    int nrcif = nr_cif(n);
    int put = putere(10, nrcif - 1);
    for(int i = 1; i <= nrcif; ++i){
        if(este_prim(n))
            return true;
        n = (n % put) * 10 + n / put;
    }
    return false;
}

void interschimbare_Z4_Z2(int a[][51], int n){
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            if(i < j &&  i + j > n + 1 && este_superprim(a[i][j]) && este_superprim(a[i][n-j+1]))
                swap(a[i][j], a[i][n-j+1]);
}

int main(){

    int a[51][51], n;
    citire(a, n);
    interschimbare_Z1_Z3(a, n);
    interschimbare_Z4_Z2(a, n);
    afisare(a, n);

    return 0;
}