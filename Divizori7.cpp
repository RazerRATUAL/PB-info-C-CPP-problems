#include <iostream>
using namespace std;

int n;

int main(){
    cin >> n;
    int m = 1, p;
    
    do{
        m++;
    }while(n % m != 0);

    p = m;
    
    do{
        p++;
    }while(n % p !=  0);

    cout << m + p;
}