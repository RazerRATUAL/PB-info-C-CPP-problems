#include <iostream>
using namespace std;

void Afisare(int n);
void CitireSir(int n, int s[]);
void R(int a[], int b[], int m, int n);
void I(int a[], int b[], int m, int n);

const int dim = 100001;
int n, m, a[dim], b[dim];
int main(){
    int n, m;
    cin >> m;
    CitireSir(m, a);
    cin >>n;
    CitireSir(n, b);

    R(a, b, m, n);
    cout<< '\n';
    I(a, b, m, n);

return 0;
}

void Afisare(int n){
        cout << n << ' ';
}
void CitireSir(int n, int s[]){
    for(int i = 0; i < n; ++i){
        cin >> s[i];
    }
}
void R(int a[], int b[], int m, int n){
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
            Afisare(a[i++]);
        else if (b[j] < a[i])
            Afisare(b[j++]);
        else
        {
            Afisare(b[j++]);
            i++;
        }
    }
    while(i < m)
        Afisare(a[i++]);
    while(j < n)
        Afisare(b[j++]);
}

void I(int a[], int b[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (a[i] < b[j])
            i++;
        else if (b[j] < a[i])
            j++;
        else
        {
            cout<<b[j++]<<" ";
            i++;
        }
    }
}