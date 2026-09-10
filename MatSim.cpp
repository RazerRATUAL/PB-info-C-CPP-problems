#include <iostream>
using namespace std;

int m[101][101];
int m1[101][101];

int main(){
    int n;
    cin >> n;
    
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
        cin >> m[i][j];

    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
         m1[i][j] = m[j][i];

    for(int i =  1; i <= n; ++i){
        for (int j = 1; j <= n; ++j)
            cout << m1[i][j] << ' ';   

        cout << endl;
    }

}