#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin ("pitici.in");
ofstream fout("pitici.out");

const int Dim = 200005;
long long Nr[Dim];
long long sp[Dim];
long long b[Dim];
int n;
int val;

void CitesteDate();
int Cb(long long x, long long y);
void Solve();

int main()
{
    CitesteDate();
    Solve();
}

void Solve()
{
    int ultcasa;

    for (int i = 1; i <= n; ++i)
    {
        ultcasa = Cb(i, b[i]);

        Nr[i]++;
        Nr[ultcasa + 1]--;
    }

    for (int i = 1; i <= n; ++i)
        Nr[i] += Nr[i - 1];

    int Max = 0;
    int Numar = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (Nr[i] > Max)
        {
            Max = Nr[i];
            Numar = 1;
        }

        else if (Nr[i] == Max)
        {
            ++Numar;
        }

    }

    fout << Max << ' ' << Numar;

}

int Cb(long long x, long long y)
{
    int st = x, dr = n, m;
    int poz = n;

    while (st <= dr)
    {
        m = (st + dr) / 2;

        if (y <= sp[m] - sp[x - 1])
        {
            poz = m;
            dr = m - 1;
        }

        else
            st = m + 1;
    }

    return poz;
}

void CitesteDate()
{
    fin >> n;

    for (int i = 1; i <= n; ++i)
    {
        fin >> val;
        sp[i] += sp[i - 1] + val;
    }

    for (int i = 1; i <= n; ++i)
        fin >> b[i];
}
