#include <fstream>
using namespace std;
ifstream fin("interclasare.in");
ofstream fout("interclasare.out");

const int dim = 1000001;

int a[dim], b[dim], c[dim];

void CitireSir(int n, int s[]);
void Interclasare(int a[], int b[], int c[], int n, int m);


int main(){
int n, m;
    fin >> n;
    CitireSir(n, a);

    fin >> m;
    CitireSir(m, b);

    Interclasare(a, b, c, n, m);

    return 0;
}


 void CitireSir(int n, int s[]){
     for(int i = 0; i < n; ++i){
         fin >> s[i];
     }
}

void Interclasare(int a[], int b[], int c[], int n, int m) {
    int i = 0, j = 0, k = 0;

    while(i < n && j < m)
        if(a[i] < b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];

    
    if(i<n)
        while(i < n)
            c[k++]=a[i++];
    else
        while(j < m)
            c[k++]=b[j++];

    for(int i = 0; i < k; i++) {
        fout << c[i] << " ";
        if((i + 1) % 10 == 0) {
            fout << endl;
        }
    }

    if(k % 10 != 0) {
        fout << endl;
    }
}