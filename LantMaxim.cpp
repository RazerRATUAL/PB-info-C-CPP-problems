#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin("lantmaxim.in");
ofstream fout("lantmaxim.out");

const int MaxN = 25;
int L[MaxN];   // lant elementar generat cu backtracking
int best[MaxN]; // cel mai lung lant elementar
int kmax;      // lung maxima a unui lant

bool a[MaxN][MaxN];
bool v[MaxN];   // v[x] = true daca nodul x a fost vizitat (plasat in lantul curent)
int n, m;
int p, q;

void CitesteGraf();
                          // x = nodul curent
void Lant(int x, int k); // k - poz curenta in L[]
void ScrieLant();
void Update(int k);

int main()
{
    CitesteGraf();
    Lant(p, 1);
    ScrieLant();
}

void Lant(int x, int k)
{
    v[x] = true;
    L[k] = x;

    if (x == q)
    {
        Update(k);
        v[x] = false;
        return;
    }

    for (int y = 1; y <= n; ++y)
        if (a[x][y] && !v[y])
            Lant(y, k + 1);
    v[x] = false;
}

void Update(int k)
{
    if (k > kmax)
    {
        kmax = k;
        for (int i = 1; i <= k; ++i)
            best[i] = L[i];
    }
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

    fin >> p >> q;
}

void ScrieLant()
{
    for (int i = 1; i <= kmax; ++i)
        fout << best[i] << ' ';
    fout << '\n';
}

