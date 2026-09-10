#include <iostream>

using namespace std;

long long int s;
bool Echilibrat(int x);

int main(){
    int a, b;
    cin >> a >> b;
    for(int i = a; i <= b; ++i)
        if(Echilibrat(i))
            s += i;
    cout << s;
    return 0;
}
bool Echilibrat(int x){
    int sp = 0, si = 0;
    while(x){
        if(x % 2 == 0)
            sp += x % 10;
        else
            si += x % 10;
        x /= 10;
    }
    return sp == si;
}