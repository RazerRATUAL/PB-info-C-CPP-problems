#include <iostream>
using namespace std;

long long n, a[21][21];
long long v_diag_princ[21], ind_diag_princ = 0, v_diag_sec[21], ind_diag_sec = 0, maxi = -1;
int main(){
    cin >> n;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j){
            cin >> a[i][j];
        if(i == j)
            v_diag_princ[++ind_diag_princ] = a[i][j];
        if(i + j == n + 1)
            v_diag_sec[++ind_diag_sec] = a[i][j];
    }
    for(int i = 1; i <= ind_diag_princ; ++i){
        for(int j = 1; j <= ind_diag_sec; ++j)
            if(v_diag_princ[i] * v_diag_sec[j] > maxi)
            maxi = v_diag_princ[i] * v_diag_sec[j];
    }
    cout << maxi;

return 0;
}