#include <iostream>
using namespace std;

int cmmdc(int x, int y);

int main(){
    long long a, b, cmmmc, s;
    cin >> a >> b;
    cmmmc = (a * b) / cmmdc(a, b);
    s = (cmmmc / a) + (cmmmc / b) - 2;
    cout << s;
    return 0;
}

int cmmdc(int x, int y){
    int r;
        while(y){
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}