#include <iostream>
using namespace std;

int n;

int main(){
    cin >> n;
    int m = 1;
    
    do{
        m++;
    }while(n % m != 0);

    cout << m * m;
}