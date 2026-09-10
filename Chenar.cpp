#include <iostream>
using namespace std;

int m[25][25];
void citire(int a[][25], int &n);
int main(){
    int n, i;
    citire(m, n);
    for (i = 0; i < n; i++)
        cout << m[0][i] << " ";
    
    for (i = 1; i < n; i++)
        cout << m[i][n-1] << " ";

    for (i = n-2; i >= 0; i--)
        cout << m[n-1][i] << " ";

    for (i = n-2; i > 0; i--)
        cout << m[i][0] << " ";

}

void citire(int a[][25], int &n){
    cin >> n;
    for(int i = 0; i< n;++i)
        for(int j = 0; j< n;++j)
        cin >> a[i][j];
}