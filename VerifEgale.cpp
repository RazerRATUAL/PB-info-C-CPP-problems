#include<iostream>
using namespace std;

const int Dim = 1001;
int a[Dim];

void CitesteSir(int n, int a[]);
bool VerifEgale (int n, int m);

int main(){
    int n;
    
    cin >> n;
    
    CitesteSir(n, a);
    bool egal = false;
    for(int i = 1; i <= n; ++i){
        if (VerifEgale(a[i], a[i+1])) {
            egal = true;
            break;
        }
    }
    if (egal)
        cout << "NU";
    else
        cout << "DA";

    
}

void CitesteSir(int n, int a[]){
    if (n == 0)
        return;
        
    CitesteSir(n - 1, a);
    
    cin >> a[n-1];
    
}

bool VerifEgale (int n, int m) {
    if(n == m)
        return true;
    else return false;
}