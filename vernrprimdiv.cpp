#include <iostream>
using namespace std;

int main(){
    int n, nrdiv;
    cin >>n;
    for (int i = 1;i <= n / i; i++)
        if (n % i == 0) {
            nrdiv++;
            if (i != n / i)
                nrdiv++;
        }
    if (nrdiv % 2  == 1)
        cout<<"da";
    else
        cout<<"nu";
    return 0;   
}