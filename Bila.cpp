#include <fstream>
#include <cstdlib>
using namespace std;

ifstream fin("bila.in");
ofstream fout("bila.out");

const int N   = 25,
         di[] = {-1, 0, 1, 0},
         dj[] = {0, 1, 0, -1};

int h[N][N];
int n, m;
int ip, jp;
int x[N][N];    /// solutii obtinute pe parcurs
int lg_max; /// lungimea maxima a unui traseu

void CitesteTabla();
void Bila(int i, int j, int k);
bool Ok(int i1, int j1, int i2, int j2);
void ScrieSol();
void UpdateSol(int k);
bool PeBordura(int i, int j);

int main()
{
    CitesteTabla();
    Bila(ip, jp, 1);
    fout << lg_max;

    return 0;
}

#define iv (i + di[d])
#define jv (j + dj[d])

void Bila(int i, int j, int k)
{
    x[i][j] = k;
    if (PeBordura(i, j))
        UpdateSol(k);
    else
        for (int d = 0; d < 4; ++d)
            if (Ok(i, j, iv, jv)) /// conditie de continuare
                Bila(iv, jv, k + 1);

    x[i][j] = 0;
}

void UpdateSol(int k)
{
    if (k > lg_max)
        lg_max = k;
}

bool Ok(int i1, int j1, int i2, int j2)
{
    if (i2 < 1 || i2 > n || j2 < 1 || j2 > m)
        return false;
    if (h[i1][j1] <= h[i2][j2])
        return false;
    if (x[i2][j2])
        return false;

    return true;
}

bool PeBordura(int i, int j)
{
    return i == 1 || j == 1 || i == n || j == m;
}

void CitesteTabla()
{
    fin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            fin >> h[i][j];
    fin >> ip >> jp;
}

