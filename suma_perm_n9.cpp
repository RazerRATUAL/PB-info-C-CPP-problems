#include <iostream>
#include <algorithm>
using namespace std;
int cif(int n);
int sumcif(int n);

const int N = 10;
int n, v[N], a[N], cnt = 0, s = 0;


int main(){
    cin >> n;

    if(n == 0){
        cout << 0;
        return 0;
    }

    int nrc = cif(n);
    int sumc = sumcif(n);

    int f = 1;
    for(int i=1; i < nrc; i++)
        f *= i;

    sumc *= f;

    int nr1 = 0;
    long long p = 1;

    long long s = 0;
    for(int i = 1; i <= nrc; i++){
        s += p * sumc;
        p *= 10;
    }

    cout << s;
    return 0;
}


int cif(int n){
    int cnt = 0;
    while(n){
        cnt++;
        n /= 10;
    }
    return cnt;
}

int sumcif(int n){
    int s = 0;
    while(n){
        s += n % 10;
        n /= 10;
    }
    return s;
}