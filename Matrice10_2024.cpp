#include <iostream>
using namespace std;

const int dim = 51;

int a[dim][dim];
int n, m;
void Swap(int a, int b);
int main(){
    cin >> n >> m;

    for(int i= 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            cin >> a[i][j];

    int p1= 1, p2= 1;

    for (int i = 1; i <= n; i++){
    if (a[i][1] <a[p1][1])
        p1 = i;
    if (a[i][m] < a[p2][m])
        p2 = i;
    }

    int aux = a[p1][1];
    a[p1][1] = a[p2][m];
    a[p2][m] = aux;

    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j)
            cout << a[i][j] << ' ';

        cout << endl;
    }
}   

void Swap(int a, int b){

}