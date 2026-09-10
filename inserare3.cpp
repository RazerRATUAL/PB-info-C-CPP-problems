#include <iostream>
#include <algorithm>
using namespace std;

const int dim = 1001;
int a[dim];

int main(){
    int n;
    cin >> n;
    int minim = 1 << 30;
    
    for (int i = 1; i <= n; ++i){
        cin >> a[i];
        if(minim >= a[i])
            minim = a[i];
    }
        
    for(int i = 1; i <= n; ++i){
        cout << a[i]<< " ";
            if(a[i] == minim)
            cout << a[i] << " ";
    }
 
    return 0;
}