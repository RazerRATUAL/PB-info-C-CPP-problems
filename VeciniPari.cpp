#include <iostream>
using namespace std;

const int dim = 102;
int a[dim][dim];

int main(){
    int n, m, c = 0;
    cin >> n>> m;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m;++j){
        //  if(i == 0 || j == 0 || i = n + 1 || j = m+ 1)
        //  a[i][j] = 0;
        //  else
            cin >> a[i][j];
        }
            

    for(int i = 1; i<= n; ++i)
        for(int j = 1; j<= m; ++j)
        {
            bool par = true;
            if(a[i+1][j] % 2 != 0 || a[i][j+1] % 2 != 0
             || a[i-1][j] % 2 != 0 || a[i][j - 1] % 2 != 0)
                par = 0;               
            if(par)
                c++;    
        }
    cout << c;    

return 0;
}