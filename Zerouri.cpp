#include <iostream>
#include <vector>
using namespace std;

int n, p2, p5;
vector<int> v(100);

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> v[i];
    }

    for(int i = 1; i <= n; i++){
        while(v[i] % 2 == 0) p2++, v[i] /= 2;
        while(v[i] % 5 == 0) p5++, v[i] /= 5;
    }

    if(p2 < p5)
        cout << p2;
    else
        cout << p5;

    return 0;
}