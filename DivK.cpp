#include <fstream>
#include <cmath>
using namespace std;

ifstream cin("divk.in");
ofstream cout("divk.out");
long long int DC(int n);

int main(){
    int n, k;
    long long int x;
    cin >> n >> k;

    while(n--) {
        cin >> x;
        if(DC(x) >= k)
            cout << x << " ";
    }

    return 0;
}

long long int DC(int n){
    int divs = 2, f = 2;

    f = 2;

    while(f * f <= n) {
        if(n % f == 0) {
            divs++;
            if(n / f != f)
                divs++;
        }
        f++;
    }

    return divs;
}