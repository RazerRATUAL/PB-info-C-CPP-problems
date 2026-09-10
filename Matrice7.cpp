#include<fstream>
using namespace std;

ifstream fin("matrice7.in");
ofstream fout("matrice7.out");

const int dim = 101;
int a[dim][dim];
int Min(int n, int c, int a[][101]);
int Max(int n, int m, int a[][101]);
void Parcurgere(int n, int m, int a[][101], int );


int main(){
    int n, m;
    
    fin >> n >> m;
    
    for(int i = 1; i<= n; i++)
        for(int j = 1; j <= m; j++)
            fin >> a[i][j];

    int maxim = Max(n, m, a);
    Parcurgere(n, m, a, maxim);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++)
            fout << a[i][j] << " ";
        fout << '\n';
    }
    return 0;
}

int Min(int n, int m, int a[][101]){
    int minim = a[1][m];
    for( int i = 2; i <= n; ++i)
        if( a[i][m] < minim )
        minim = a[i][m];
    return minim;
}
int Max(int n, int m, int a[][101]){
    int maxim = a[1][1];
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            if( a[i][j] > maxim)
                maxim = a[i][j];
    return maxim;
}

void Parcurgere( int n, int m, int a[][101], int maxim)
{
    for( int i = 1; i <= n; ++i )
        for( int j = 1; j <= m; ++j)
            if( a[i][j] == maxim)
                a[i][j] = Min(n, j, a);
}








