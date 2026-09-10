#include <iostream>
using namespace std;

const int dim = 101;
int a[101][101];

int main(){
    int n , m , x ;
    cin >> n >> m;
    for(int i = 1; i <= n ; i ++)
        for(int j = 1; j <= m ; j ++)
            cin >> a[i][j];
    cin >> x;
    
    bool g = false;
    for(int i = 1; i <= n ; i ++)
        for(int j = 1; j <= m ; j ++)
            if(i == 1 || i == n || j == 1 || j == m)
                if(a[i][j] == x)
                    g = true;
    
    if(g)   cout << "DA";
    else    cout << "NU";
}