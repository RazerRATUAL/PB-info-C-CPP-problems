#include <iostream>
using namespace std;

const int dim = 1000001;
int a[1000001];
int matr[102][102];

int main(){
    int n, m, ma = -1;
    bool ok = 0;
    cin >> n>> m;
    for(int i = 1;i <= n;i++){
        for(int j=1;j<=m;j++){
            cin >> matr[i][j];
            a[matr[i][j]]++;
            ma= max(ma,matr[i][j]);
        }
    }

    for(int i = ma; i >= 1; i--){
        if(a[i]>=2){
            cout << i;
            ok = 1;
            break;
        }
    }
    if(ok == 0)
        cout<<"IMPOSIBIL";
    return 0;
}