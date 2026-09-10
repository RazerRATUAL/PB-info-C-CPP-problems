#include <iostream>
using namespace std;

const int dim = 101;
int a[dim][dim];

int main(){
    int n, sn = 0, se = 0, ss = 0, sv = 0;
    cin >> n;

    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            cin >> a[i][j];

    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j){
            if(i < j && i + j < n + 1)
                sn += a[i][j];
            if(i < j && i + j > n + 1)
                se += a[i][j];
            if(i > j && i + j > n + 1)
                sv += a[i][j];
            if(i > j && i + j < n + 1)
                ss += a[i][j];   
        }

    int v[4] = {sn, sv, se, ss};
    for(int i = 0; i < 3; ++i)
        for(int j = i + 1; j < 4; ++j)
            if(v[i] > v[j])
                swap(v[i], v[j]);

    for(int i = 0; i < 4; ++i)
    cout << v[i] << " ";                
}