#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("adiacenta.in");
ofstream fout("adiacenta.out");

const int Dim = 101;
 
int n;
int a[Dim][Dim];
 
void CitesteGraf();
void AfiseazaMatr();
 
int main()
{
    CitesteGraf();
    AfiseazaMatr();
}
 
void CitesteGraf()
{
    fin >> n;
 
    int x, y;
 
    while(fin >> x >> y)
    {
        if (x == -1)
            break;
 
        if (!a[x][y])
            a[x][y] = 1, a[y][x] = 1;
    }
}
 
void AfiseazaMatr()
{
    int cnt;
    for (int i = 1; i <= n; ++i)
    {
        cnt = 0;
 
        for (int j = 1; j <= n; ++j)
            if (a[i][j])
                ++cnt;
 
        cout << cnt << ' ';
 
        for (int j = 1; j <= n; ++j)
            if (a[i][j])
                cout << j << ' ';
 
        cout << '\n';
    }
}