#include <iostream>
#include <algorithm>
using namespace std;
struct sir {
    int val, poz;
};
const int dim =1001;
void Bubble(int a[], int b[], int n);
int Prim(int n);
int a[dim], b[dim];
int main(){

    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
        b[i] = i;
    }

    Bubble(a, b, n);

    for(int j = 1; j <= n; ++j){
                cout << b[j] << ' ';
    }

    return 0;
}

void Bubble(int a[], int b[], int n){
    for(int i = 1; i < n; ++i)
        for(int j = 1; j < n-i; ++j) 
            if(a[j] < a[j+1]){
                swap(a[j], a[j+1]);
                swap(b[j], b[j+1]); 
            }
}