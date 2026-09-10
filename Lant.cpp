#include <fstream>
using namespace std;

ifstream fin("lant.in");
ofstream fout("lant.out");

const int N = 30;
bool a[N][N];
bool v[N];  // marcheaza nodurile vizitate

int m; /// nr de muchii ale grafului
int n;
int p, q;
int L[N]; // sirul sol in back

void CitesteGraf();
void Lant(int x, int k);
void ScrieSol(int k);

int main()
{
    CitesteGraf();
    Lant(p, 1);
    return 0;
}

void Lant(int x, int k)
{
    v[x] = true;
    L[k] = x;
    if (x == q)
    {
        ScrieSol(k);
        v[x] = false;
        return;
    }

    for (int y = 1; y <= n; ++y)
        if (a[x][y] && !v[y])
            Lant(y, k + 1);

    v[x] = false;
}

void CitesteGraf()
{
    fin >> n >> m;
    int x, y;
    while (m--)
    {
        fin >> x >> y;
        a[x][y] = a[y][x] = true;
    }

    fin >> p >> q;
}

void ScrieSol(int k)
{
    for (int i = 1; i <= k; ++i)
        fout << L[i] << ' ';
    fout << '\n';
}

