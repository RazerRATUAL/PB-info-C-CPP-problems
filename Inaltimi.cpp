#include <iostream>
#include <algorithm>
using namespace std;

const int dim =1001;
struct sir {
    int val, poz;
}a[dim];


void Bubble(sir a[], int n);
int Prim(int n);
int main(){

    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i].val;
        a[i].poz = i;
    }

    Bubble(a, n);

    for(int j = 1; j <= n; ++j){
                cout << a[j].poz << ' ';
    }

    return 0;
}

void Bubble(sir a[], int n){
    for(int i = 1; i < n; ++i)
        for(int j = 1; j <= n-i; ++j) 
            if(a[j].val > a[j+1].val){
                swap(a[j], a[j+1]);
            }
}