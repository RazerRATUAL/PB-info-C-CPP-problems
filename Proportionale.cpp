#include <iostream>
using namespace std;

int n, a[1001], b[1001];

void sortare(int a[], int n){
    for(int i = 2; i <= n; ++i)
        for(int j = i; j >= 2; --j)
            if(a[j] < a[j-1])
                swap(a[j], a[j-1]);
}

int main(){

    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    for(int i = 1; i <= n; ++i)
        cin >> b[i];

    sortare(a, n);
    sortare(b, n);

    bool ok = true;
    for(int i = 1; i < n; ++i)
        if(a[i] * b[i+1] != a[i+1] * b[i])
            ok = false;

    if(ok)
        cout << "DA";
    else cout << "NU";

    return 0;
}