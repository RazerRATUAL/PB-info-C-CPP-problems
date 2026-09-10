#include <fstream>
#include <algorithm>

std::ifstream fin("sclmprime.in");
std::ofstream fout("sclmprime.out");

struct Numar {
    int val;
    int pozitie;

    bool operator < (Numar const& n) const noexcept
    {
        return val < n.val || (val == n.val && pozitie < n.pozitie);
    }
};

const int Dim = 1005;
Numar a[Dim];
int L[Dim];
int tata[Dim];
int n, Lmax, pozfin;
bool prime[1000 * Dim];

void CitesteDate();
void Dinamica();
void Erathostene(int n);
void ScrieSol(int poz);

int main()
{
    Erathostene(1000 * Dim - 1);
    CitesteDate();
    Dinamica();
    ScrieSol(pozfin);
}

void CitesteDate()
{
    int val = 0;
    int k = 0;

    fin >> n;

    for (int i = 1; i <= n; ++i)
    {
        fin >> val;
        if (prime[val])
        {
            a[++k].val = val;
            a[k].pozitie = k;
        }
    }

    n = k;
}

void Dinamica()
{
    std::sort(a + 1, a + n + 1);

    L[1] = 1;

    for (int i = 2; i <= n; ++i)
    {
        int mx = 0;

        for (int j = 1; j < i; ++j)
        {
            if (L[j] > mx && (a[i].pozitie > a[j].pozitie || (a[i].pozitie != a[j].pozitie && a[i].val == a[j].val)))
            {
                mx = L[j];
                tata[i] = j;
            }
                
            L[i] = mx + 1;

            if (L[i] > Lmax)
            {
                Lmax = L[i];
                pozfin = i;
            }
                
        }
    }

    fout << Lmax << '\n';

    if (n == 1)
        fout << a[1].val;
}

void Erathostene(int n)
{
    for (int i = 2; i <= n; ++i)
        prime[i] = true;

    for (int i = 2; i * i <= n; ++i)
        if (prime[i])
            for (int j = 2; i * j <= n; ++j)
                prime[i * j] = false;
}

void ScrieSol(int poz)
{
    if (poz == 0)
        return;

    ScrieSol(tata[poz]);

    fout << a[poz].val << ' ';
}