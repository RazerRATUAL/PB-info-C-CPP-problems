#include <iostream>
using namespace std;

const int dim = 102;
int m[dim][dim];
int sl[dim], sc[dim];

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
        cin >> m[i][j];

    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
        sl[i] += m[i][j], sc[i] += m[j][i];

    int nrel = 0;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
            if(sl[i] == sc[j])
                nrel += 1;
            
    cout << nrel;
}
    