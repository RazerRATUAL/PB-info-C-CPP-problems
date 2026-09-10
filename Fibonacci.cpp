#include <iostream>
using namespace std;

int a[41];

int main(){
    int n;
    cin >> n;

    a[1] = 1;
    a[2] = 1;
    if(n < 2)
        cout << a[1];
    else
        cout << a[1] << " " << a[2] << " ";

    for(int i = 3; i <= n; ++i){
        a[i]= a[i - 1] + a[i - 2];
        cout << a[i] << " ";
    }

    return 0;
}