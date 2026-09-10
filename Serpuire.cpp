#include <iostream>
using namespace std;

const int dim = 27;
int m[dim][dim];

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
        cin >> m[i][j];

    int i = 1, j = 1;
    while (!(i == n && j == n)){
      if (i == n)
         cout << m[i][j++] << " ";
      else
         cout << m[i++][j] << " ";

      while (i != 1 && j != n)
         cout << m[i--][j++] << " ";

      if (j == n)
         cout << m[i++][j] << " ";
      else
         cout << m[i][j++] << " ";
       
      while (i != n && j != 1)
         cout << m[i++][j--] << " ";
    }

    cout << m[n][n];       
}

