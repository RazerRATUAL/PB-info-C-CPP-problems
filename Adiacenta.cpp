#include <fstream>
using namespace std;

ifstream fin("adiacenta.in");
ofstream fout("adiacenta.out");

const int N = 101;

int a[N][N];  
int n, m;     

void CitesteGraf();
void ScrieMatrAdiacenta();

int main()
{
    CitesteGraf();
    ScrieMatrAdiacenta();
}

void CitesteGraf()
{
    fin >> n >> m;
    int x, y;
    for (int i = 1; i <= m; ++i)
    {
        fin >> x >> y;
        a[x][y] = 1;
        a[y][x] = 1;
    }
}

void ScrieMatrAdiacenta()
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
            fout << a[i][j] << ' ';
        fout << '\n';
    }
}



