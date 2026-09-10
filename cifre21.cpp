#include <iostream>
using namespace std;
bool Cifre(int a);

int n, ct, x;

int main()
{
    cin >>n;
    for(int i = 1;i <= n; i++){
        cin >>x;
        if(Cifre(x))
        ct++;
    }
    cout <<ct;
}

bool Cifre(int a){
    if(a == 0)
        return 1;
    while(a){
        if(a % 10 == 0) 
            return 1;
        a /= 10;
    }
    return 0;
}