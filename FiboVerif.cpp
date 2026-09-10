#include <cmath>
#include <iostream>
using namespace std;

long long a[11];
bool PP(long long x);
bool FIB(long long n);

int main(){
    long long n;
    cin >> n;
    for (long long i = 1; i <= n; ++i)
        cin >> a[i];

    for (long long i = 1; i<= n; ++i){
        if(FIB(a[i]))
            cout << "DA" << '\n';
        else 
            cout << "NU" << '\n';
    }

    return 0;
}

bool PP(long long x){
    long long s = sqrt(x);
    return (s * s == x);
}

bool FIB(long long n){
        return PP(5 * n * n + 4)
        || PP(5 * n * n - 4);
}