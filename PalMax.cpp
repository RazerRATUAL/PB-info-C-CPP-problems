#include <iostream>

using namespace std;
int x, x1, y, maxim, a;
int main(){
    cin >>x;
    while(x != 0){
        x1 = 0;
        y = x;
        while(y != 0){
            x1 = x1 * 10 + y % 10;
            y /= 10;
        }
        if(x == x1)
            if(x > maxim){
                maxim = x;
                a = 1;
            }
            else
                if(x == maxim)
                    a++;
        cin >>x;
    }
    if(a!= 0)
    cout <<maxim <<" " <<a;
    else
        cout <<"NU EXISTA";
    return 0;
}