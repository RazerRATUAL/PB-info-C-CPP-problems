#include <iostream>
#include <algorithm>
using namespace std;


void Bubble(int a[], int n);
int Prim(int n);

int main(){

    int a[1001], n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];

    Bubble(a, n);

    for(int j = 1; j <= n; ++j){
        if(Prim(a[j]))
                cout << a[j] << ' ';
    }


    return 0;
}

void Bubble(int a[], int n){
    for(int i = 1; i < n; ++i)
        for(int j = 1; j < n; ++j)
            if(a[j] > a[j+1])
                swap(a[j], a[j+1]);
}



int Prim(int n){
    if (n < 2)
        return 0;
        
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return 0;
    return 1;
}