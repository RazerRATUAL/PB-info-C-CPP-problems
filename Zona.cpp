#include <iostream>
#include <algorithm>
using namespace std;

const int dim = 203;
int m[dim][dim], a[dim];

int main(){
int n, val = 1;
cin >> n;
for(int i = 1; i<= n; ++i)
    for(int j = 1; j <= n;++j)
    cin >> m[i][j];

for(int i = 1; i<= n; ++i)
    for(int j = 1; j <= n;++j){
        if(i > j && i + j < n+1){
            a[val] = m[i][j];
            val++;
        }
    }

sort(a, a + val);
for(int i = 1; i< val; ++i){
    if(a[i] != a[i-1])
    cout << a[i] << " ";
}
}