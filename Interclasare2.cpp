#include <fstream>
using namespace std;
ifstream cin("interclasare2.in");
ofstream cout("interclasare2.out");

const int dim = 1000001;
int k = 0;
int a[dim], b[dim], c[dim];

void CitireSir(int n, int s[]);
void Interclasare(int a[], int b[], int n, int m);
void Afisare(int n);

int main(){
int n, m;
cin >> n;
CitireSir(n, a);

cin >> m;
CitireSir(m, b);

Interclasare(a, b, n, m);

return 0;
}


void CitireSir(int n, int s[]){
    for(int i = 0; i < n; ++i){
        cin >> s[i];
    }
}

void Afisare(int n){
    if (k++ == 10)
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
    if (a[i] < b[j])
        ++i;
    else if (a[i] > b[j])
        ++j;
    else{
        Afisare(a[i++]);
        j++;
    }
}

    while (i < n)
        if(a[i++] == b[j])
            Afisare(a[i++]);
    while (j < m)
        if(a[i] == b[j++])
            Afisare(b[j++]);
}