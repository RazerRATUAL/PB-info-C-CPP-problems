#include <fstream>
using namespace std;

ifstream cin("interclasare1.in");
ofstream cout("interclasare1.out");

const int dim = 100001;
int k = 0;
int a[dim], b[dim], c[dim];
void bubble(int a[], int n);
void CitireSir(int n, int s[]);
void Interclasare(int a[], int b[], int n, int m);
void Afisare(int n);

int main(){
    int n, m;
    cin >> n >> m;
    CitireSir(n, a);
    CitireSir(m, b);
    bubble(b, m);

    Interclasare(a, b, n, m);

    return 0;
}

void bubble(int a[], int n){
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int aux = a[j];
                a[j] = a[j + 1];
                a[j + 1] = aux;
            }
        }
    }
}

void CitireSir(int n, int s[]){
    for(int i = 0; i < n; ++i){
        cin >> s[i];
    }
}
void Afisare(int n){
    if (k++ == 20)
    {
        cout << '\n' << n << ' ';
        k = 1;
    }
    else
        cout << n << ' ';
}
void Interclasare(int a[], int b[], int n, int m) {
    int i = 0, j = 0;

    while (i < n && j < m){
        if (a[i] < b[j]){
            if(a[i] % 2 == 0)
                Afisare(a[i]);
            i++;
        }

        else{
            if(b[j] % 2== 0)
                Afisare(b[j]);
            j++;
        }
    }

    while (i < n){
        if(a[i] % 2 == 0)
            Afisare(a[i]);
        i++;}
    while (j < m){
        if(b[j] % 2== 0)
            Afisare(b[j]);
        j++;}
}