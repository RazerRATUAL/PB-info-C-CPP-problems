#include<iostream>
using namespace std;
const int dim= 1001;
int a[dim];

void CitesteSir(int &n, int a[]){
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
}
int Verif(int a[], int n){
  for(int i = 1;i <= n - 1; i++)
    if(a[i] > a[i + 1])
      return 0;
  return 1;
}
int main(){
    int m, n;
    cin >> m;
    for(int i = 1;i <= m;i++)
        {
            CitesteSir(n, a);
            cout << Verif(a, n) <<" ";
        }

    return 0;
}