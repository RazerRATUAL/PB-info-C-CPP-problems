#include <iostream>
using namespace std;

const int dim = 21;
int m[dim][dim];
int n, s1, s2;
int main(){
    cin >> n;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
        cin >> m[i][j];

    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j){
            if(i == j)
            s1 += m[i][j];
        }

    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j){
            if(i + j == n + 1)
            s2 += m[i][j];
    }

    cout << abs(s1 - s2);
}