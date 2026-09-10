#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n >= 1) {
        int a = 1;
        int b = 1;
        int c = 0;
        int amax = 0;
        
        while (a <= n) {
            if (a > amax) {
                amax = a;
            }
            c = a + b;
            a = b;
            b = c;
           
        }
        
        cout << amax << " ";
        n -= amax;
    }

    return 0;
}