#include <fstream>
using namespace std;

ifstream fin("lanturi.in");
ofstream fout("lanturi.out");

const int N = 30;
bool a[N][N];
bool v[N];
int n, m;
int p, q, r;
int L[N + 1]; // lantul curent

void CitesteGraf();
void Lant(int x, int k);
void ScrieLant(int k);
void Update(int k);

int main()
{
    CitesteGraf();
    Lant(p, 1);

}

void Lant(int x, int k)
{
    v[x] = true;
    L[k] = x;
    if (x == q)
    {
        if (v[r])
            ScrieLant(k);
        v[x] = false;
        return;
    }

    for (int y = 1; y <= n; ++y)
        if (a[x][y] && !v[y])
            Lant(y, k + 1);
    v[x] = false;
}


void ScrieLant(int k)
{
    for (int i = 1; i <= k; ++i)
        fout << L[i] << ' ';
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

    fin >> p >> q >> r;
}
