#include<fstream>
using namespace std;

void Citire(int& , int& , int a[][101]);
void Afisare( int , int , int a[][101]);
int Minim(int n, int c, int a[][101]);
int Maxim(int n, int m, int a[][101]);
void Parcurgere(int n, int m, int a[][101], int );


int main()
{
    int n, m, a[101][101];
    Citire(n, m,a);

    int maxim = Maxim(n, m, a);
    Parcurgere(n, m, a, maxim);
    Afisare(n, m, a);
    return 0;
}

void Citire(int& n, int& m, int a[][101])
{
   ifstream fin("matrice7.in");
    fin >> n >> m;
    for(int i = 1; i<= n; i++)
        for(int j = 1; j <= m; j++)
            fin >> a[i][j];
}
void Afisare( int n, int m, int a[][101])
{
    ofstream fout("matrice7.out");
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
            fout << a[i][j] << " ";
        fout << '\n';
    }

}

int Minim(int n, int c, int a[][101])
{
    int minim = a[1][c];
    for( int i = 2; i <= n; ++i)
        if( a[i][c] < minim )
        minim = a[i][c];
    return minim;
}
int Maxim(int n, int m, int a[][101])
{
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
                a[i][j] = Minim(n, j, a);
}









