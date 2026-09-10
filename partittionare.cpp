#include <iostream>
#include <cmath>
using namespace std;
const int dim = 1001;
int a[dim];

int main(){
    int n, i;
    bool sortat;

    cin >> n;

    for(i = 0; i < n; i++)
        cin >> a[i];

    do {
        sortat = true;
        for(i = 0; i < n - 1; i++)
            if(a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
                sortat = false;
            }
    } while(!sortat);

    for(i = 0; i < n; i++)
        if(a[i] % 2 == 0)
            cout << a[i] << " ";

    for(i = 0; i < n; i++)
        if(abs(a[i] % 2) == 1)
            cout << a[i] << " ";

    return 0;
}