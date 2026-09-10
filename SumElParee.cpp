#include <iostream>
using namespace std;

const int dim = 101;
int a[dim][dim];

int main()
{
    int n, m, s = 0, smax = 0, I = 0;
    cin >> n >> m;

    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j) 
            cin >> a[i][j];
    
    for(int i = 1; i <= n; ++i){
        s = 0;
        for(int j = 1; j <= m; ++j){
            if(a[i][j] % 2 == 0) 
                s = s + a[i][j];
        }

        if(s >= smax){
            smax = s;
            I = i;
        }
    }

    cout << I;
}