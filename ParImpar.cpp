#include <iostream>
using namespace std;

int ParImp(int n);

int main()
{
    int a, b;
    cin >> a >> b;
    if(ParImp(a) == ParImp(b))
        if(a > b)
            cout << a;
        else
            cout << b;
    else if(ParImp(a) > ParImp(b))
        cout << a;
    else
        cout << b;
    return 0;
}

int ParImp(int n){
    int nr = 0,p = 1;
    if(n % 2 == 0){
        while(n){
            if(n % 10 % 2 == 0){
                nr = n % 10 * p + nr;
                p *= 10;
            }
            n /= 10;
        }
    }
    else{
        while(n){
            if(n % 10 % 2 != 0){
                nr = n % 10 * p + nr;
                p *= 10;
            }
            n /= 10;
        }
    }
    return nr;
}