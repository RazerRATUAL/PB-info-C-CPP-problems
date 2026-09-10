// #include <iostream>
// using namespace std;
// int nrdiv(int n);

// int main(){

// }

// int nrdiv(int n){
//     int cnt = 1;
//     for(int d =1 ; d <= n ; d ++ )
//         if(n % d == 0)
//             cnt++;
//     return cnt;
// }
#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
int nrdiv(int n);
typedef unsigned long long int ull;

int main(){
    ull n;
    cin >> n;
    ull powr = n;
    ull nrDiv = 1;
    ull i = 2;
    while (n > 1)
    {
        ull cnt = 0;
        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        nrDiv = (nrDiv * (1ULL + ((cnt % 59999) * (powr % 59999)))) % 59999;
        i++;
        if (i * i > n)
            i = n;
    
    }
    cout << nrDiv;
}