#include <iostream>
using namespace std;

int main(){    
    long long a, b;
    cin >> a >> b;
       long long ca = a, cb = b;
    while(b){
         long long r = a % b;
        a = b; 
        b = r;
    }
    cout << ca / a + cb / a - 2;
     return 0;   
}