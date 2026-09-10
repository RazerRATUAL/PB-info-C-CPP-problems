#include <iostream>
using namespace std;

const int dim = 102;
int a[dim][dim];

int main(){
  int n, s = 0;
  cin >> n;

  for(int i = 1; i<=n; i++)
    for(int j = 1; j <= n; j++)
      cin >> a[i][j];
  
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= n; j++)
      if(i == j)
        s += a[i][j+1] + a[i][j-1];
    
cout << s;
}