#include <iostream>
#include <algorithm>

using namespace std;
const int dim = 200001;
int a[dim], b[dim], n, m;

void R(int a[], int n, int b[], int m);
void I(int a[], int n, int b[], int m);
void D(int a[], int n, int b[], int m);
void DD(int a[], int n, int b[], int m);

int main(){

    char op;
    cin >> n >> m >> op;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    for(int j = 1; j <= m; ++j)
        cin >> b[j];
    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);
    if(op == '+')
        R(a, n, b, m);
    else if(op == '*')
        I(a, n, b, m);
    else if(op == '-')
        D(a, n, b, m);
    else DD(a, n, b, m);

    return 0;
}



void R(int a[], int n, int b[], int m){
    int inda = 1, indb = 1;
    while(inda <= n && indb <= m)
        if(a[inda] < b[indb])
            cout << a[inda++] << ' ';
        else if(a[inda] > b[indb])
            cout << b[indb++] << ' ';
        else cout << a[inda++] << ' ', indb++;
    while(inda <= n)
        cout << a[inda++] << ' ';
    while(indb <= m)
        cout << b[indb++] << ' ';
}

void I(int a[], int n, int b[], int m){
    int inda = 1, indb = 1;
    while(inda <= n && indb <= m)
        if(a[inda] < b[indb])
            inda++;
        else if(a[inda] > b[indb])
            indb++;
        else cout << a[inda++] << ' ', indb++;
}

void D(int a[], int n, int b[], int m){
    int inda = 1, indb = 1;
    while(inda <= n && indb <= m)
        if(a[inda] < b[indb])
            cout << a[inda++] << ' ';
        else if(a[inda] > b[indb])
            indb++;
        else inda++, indb++;
    while(inda <= n)
        cout << a[inda++] << ' ';
}

void DD(int a[], int n, int b[], int m){
    int inda = 1, indb = 1;
    while(inda <= n && indb <= m)
        if(a[inda] < b[indb])
            cout << a[inda++] << ' ';
        else if(a[inda] > b[indb])
            cout << b[indb++] << ' ';
        else inda++, indb++;
    while(inda <= n)
        cout << a[inda++] << ' ';
    while(indb <= m)
        cout << b[indb++] << ' ';
}

