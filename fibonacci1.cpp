#include <iostream>
using namespace std;


int main(){
    long long n, n1 = 1, n2 = 1;
    cin >> n;

        cout << n1 << " ";
        while(n2 <= n)
        {
            cout << n2 << " ";
            long long aux = n1;
            n1 = n2;
            n2 = aux + n2;
        }
}