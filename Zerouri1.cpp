#include <iostream>
#include <chrono>
using namespace std;

/* Zerouri1 */

int main(){

    int n;
    cin >> n;
    int cnt2 = 0, cnt5 = 0;
    long long rez = 1, x;
    for(int i = 1; i <= n; ++i){
        cin >> x;
        while(x % 2 == 0)
            x /= 2, cnt2++;
        while(x % 5 == 0)
            x /= 5, cnt5++;
        rez *= x;
        rez %= 10;
    }
    if(cnt2 > cnt5)
        for(int i = 1; i <= cnt2 - cnt5; ++i)
            rez *= 2, rez %= 10;
    else
        for(int i = 1; i <= cnt5 - cnt2; ++i)
            rez *= 5, rez %= 10;

    cout << rez;

    return 0;
}