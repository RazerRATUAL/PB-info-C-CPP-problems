#include <iostream>

using namespace std;
void Swap(int& a, int& b);

const int dim = 102;
int a[dim][dim], v[dim] , s[dim];

int main(){
    int n, m, k;
    cin >> n >> m;
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= m ; ++j){
            cin >> a[i][j];
            s[i] += a[i][j];
        }

    for(int i = 1 ; i <= n ; ++i)
        v[i] = i;

    for(int i =1 ; i < n ; ++i)
        for(int j = i + 1 ; j <= n ; ++j)
            if(s[v[i]] > s[v[j]])
                Swap(v[i] , v[j]);

    for(int i = 1 ; i <= n ; ++i)
    {
        for(int j = 1 ; j <= m ; ++j)
            cout << a[v[i]][j] << " ";
        cout << endl;
    }
    return 0;
}


void Swap(int& a, int& b){
    int aux = a;
    a = b;
    b = aux;
}