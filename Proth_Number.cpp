#include <iostream>
using namespace std;

void proth(int x);

int main(){
    int n;
    cin >> n;
    n--;
    int p = 0;
    while(n % 2 == 0)
        n /= 2, p++;
    int put = (1 << p);
    if(put > n)
        cout << "DA";
    else
        cout << "NU";
    return 0;
}