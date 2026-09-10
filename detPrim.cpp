#include <iostream>
#include <cmath>
using namespace std;

bool prim(int n)
{
    if (n <= 1) {
        return false;
    }
    for (int d = 2; d * d <= n; d++){
        if (n % d == 0) {
            return false;
        }
    }
    return true;
}

int cmpr(int a, int b){
    int min = 1000000001;
    int max = 0;

    for (int x = a; x <= b; x++){
        if (prim(x)){
            int d = abs(b + a - 2 * x);
            if (d < min){
                min = d;
                max = x;
            }
        }
    }
    return max;
}

int main(){
    int a, b;
    cin >> a >> b;

    int max = cmpr(a, b);

    if (max){
        cout << max;
    }
    else{
        cout << "NU EXISTA";
    }
    return 0;
}