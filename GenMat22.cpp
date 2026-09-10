#include <iostream>
using namespace std;

int m[61][61], n, x;
int main(){
    cin >> n;
    n = n * 3;
    for(int i = 1; i <= n; i = i + 3)
        for(int j = 1; j <= n; j = j +3){
            x++;
            m[i][j] = x;
            m[i][j + 2] = x;
            m[i + 1][j + 1] = x;
            m[i + 2][j] = x;
            m[i + 2][j + 2] = x;    
        }

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= n; ++j)
            cout << m[i][j] << " ";
        cout << endl;
    }
}