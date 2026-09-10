#include <iostream>

#include <cmath>

using namespace std;

int main(){
    int n, i, x2, x, c, pa = 0, mpa, ma;
    cin >> n;
    mpa = -(pow(2, 30));
    ma = -(pow(2, 30));
    while (n) {
        cin >> x;
        i = x;

        pa = 0;
        c = 1;
        do{
        x2 = x % 10;
        if (x2 % 2 == 0){
                pa = pa + c * x2;
                c = c * 10;
                }
        x = x / 10;
        } while (x > 0);

    if (mpa < pa){
        mpa = pa;
        ma = i;
        } 
    else if (mpa == pa){
        if (ma <= i) {
            ma = i;
        }
    }
        n--;
    }
    cout << ma;

    return 0;
}