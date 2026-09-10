#include <fstream>
#include <cstdlib>
using namespace std;

ifstream fin("ciclu.in");
ofstream fout("ciclu.out");

const int N = 30;
bool a[N][N];
bool v[N];
int niv[N]; /// niv[x] = nivelul lui x in arborele DFS
int n, m;
int p;
int L[N + 1]; // lantul curent

void CitesteGraf();
void Ciclu(int x, int k);
void ScrieCiclu(int k);

int main()
{
    CitesteGraf();
    Ciclu(p, 1);
    return 0;
}

void Ciclu(int x, int k)
{
    v[x] = true;
    L[k] = x;
    niv[x] = k;
    for (int y = 1; y <= n; ++y)
        if (a[x][y])
        {
            if (!v[y]) // daca y este fiul lui x
            {
               // t[y] = x;
                Ciclu(y, k + 1);
            }
            else // daca y este vizitat
                if (niv[x] - niv[y] >= 2 && y == p)
                {
                    ScrieCiclu(k);
                    exit(0);
                }
        }
}

void ScrieCiclu(int k)
{
    for (int i = 1; i <= k; ++i)
        fout << L[i] << ' ';
    fout << p;
    fout << '\n';
}

void CitesteGraf()
{
    fin >> n >> m;
    int x, y;
    for (int i = 1; i <= m; ++i)
    {
        fin >> x >> y;
        a[x][y] = a[y][x] = true;
    }

    fin >> p;
}
