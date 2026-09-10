#include <iostream>
using namespace std;

const int N = 101;
int a[N][N];
int x, y;
int n, m;
int nmax = 0;

void CitesteGraf();
void Grad();

int main(){
    CitesteGraf();
    Grad();
}

void CitesteGraf(){
    cin >> n >> m;
    for(int i = 1, x, y; i <= m; ++i)
    {
        cin >> x >>  y;
        a[x][y] = a[y][x] = 1;
        a[y][0]++;
    }
}

void Grad(){
        bool ok = false;
        for(int i = 1; i <= n; ++i)
        if(a[i][0] == nmax)
            {
                cout << i << ' ';
                ok = true;
            }
        if(!ok)
        cout << "NU EXISTA";
}