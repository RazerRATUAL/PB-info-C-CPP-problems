#include <fstream>
using namespace std;

ifstream fin ("iesire.in");
ofstream fout("iesire.out");

const int Dim = 101;
int a[Dim][Dim];
int b[Dim][Dim];
int c[Dim * Dim];
int n, m, nrcamere;;

void CitesteMatrice();
void NumaraCamere();
void VerificaCamere();
void AfiseazaRaspuns(bool ok);
void Fill(int i, int j);
bool Ok(int i, int j);
bool DetMargine(int i, int j);

int main()
{
    CitesteMatrice();
    NumaraCamere();
    VerificaCamere();

    return 0;
}

void CitesteMatrice()
{
    fin >> n >> m;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            fin >> a[i][j];
}

void NumaraCamere()
{
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
        {
            if (a[i][j] == 0 && b[i][j] == 0)
            {
                nrcamere++;
                Fill(i, j);
            }
        }
}
void VerificaCamere()
{
    int x, y;

    for (int i = 1; i <= m; ++i)
    {
        fin >> x >> y;

        AfiseazaRaspuns(c[b[x][y]]);
    }
}

void AfiseazaRaspuns(bool ok)
{
    if (ok)
        fout << "da\n";

    else
        fout << "nu\n";
}

void Fill(int i, int j)
{
    if (!Ok(i, j))
        return;

    b[i][j] = nrcamere;

    if (DetMargine(i, j))
        c[nrcamere] = true;

    Fill(i - 1, j);
    Fill(i, j + 1);
    Fill(i + 1, j);
    Fill(i, j - 1);
}

bool Ok(int i, int j)
{
    if (i < 1 || i > n ||  j < 1 || j > n)
        return false;

    if (b[i][j])
        return false;

    if (a[i][j] == 1)
        return false;

    return true;
}

bool DetMargine(int i, int j)
{
    if (i == 1 || i == n || j == 1 || j == n)
        return true;

    return false;
}