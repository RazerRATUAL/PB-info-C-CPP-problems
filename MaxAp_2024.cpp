#include <iostream>
using namespace std;
const int dim = 101;

int a[dim][dim], fr[10001] , v[10001];

int main(){
    int n, m, k = 0;
    
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= m ; ++j)
            cin >> a[i][j];

    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= m ; ++j){
            int poz = 0;
            for(int p = 1; p <= k && poz == 0 ;p++)
                if(v[p] == a[i][j])
                    poz = p;
            if(poz == 0) {
                k ++; v[k] = a[i][j]; fr[k] = 1;
            }
            else
                fr[poz] ++;
        }
}