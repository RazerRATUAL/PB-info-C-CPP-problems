#include <fstream>
using namespace std;

ifstream fin("lantmaxim1.in");
ofstream fout("lantmaxim1.out");

const int N = 30;
bool a[N][N];
bool v[N];
int n, m;
int q;
int L[N];   /// lantul curent
int sol[N]; /// lantul de lungime maxima care se termina cu q
int lg_max;         // lung lantului sol[]

void CitesteGraf();
void Lant(int x, int k);
void GenereazaLanturi();
void ScrieLantMax();
void Update(int k);

int main()
{
    CitesteGraf();
    GenereazaLanturi();
    ScrieLantMax();

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
    if (k > lg_max)
    {
        lg_max = k;
        for (int i = 1; i <= k; ++i)
            sol[i] = L[i];
    }
}

void GenereazaLanturi()
{
    for (int x = 1; x <= n; ++x)
        if (x != q)
            Lant(x, 1);
}

void ScrieLantMax()
{
    for (int i = 1; i <= lg_max; ++i)
        fout << sol[i] << ' ';
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

    fin >> q;
}
