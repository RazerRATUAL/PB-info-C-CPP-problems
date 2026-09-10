#include <iostream>
#include <cmath>
using namespace std;

int cmmdc(int x, int y);

int main()
{
    long long a, b, C, L;
    cin >> a>> b;
    L = cmmdc(a, b);
    C = (a / L)*(b / L);
    cout << C << " " << L;
    return 0;
}

int cmmdc(int x, int y){
    int r;
        while(y){
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}