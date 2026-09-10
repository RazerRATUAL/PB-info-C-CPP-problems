#include <fstream>

std::ifstream fin("livada_xi.in");
std::ofstream fout("livada_xi.out");

const int Dim = 102;
int a[Dim][Dim];
int S[Dim][Dim];
int n;

void CitesteDate();
void Dinamica();

int main()
{
    CitesteDate();
    Dinamica();

    return 0;
}

void CitesteDate()
{
    fin >> n;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= i; ++j)
            fin >> a[i][j];
}

void Dinamica()
{
    int smin = 1e8;

    for (int i = 0; i < Dim; ++i)
        for (int j = 0; j < Dim; ++j)
            S[i][j] = smin;

    int x = 0;

    for (int i = n; i >= 1; i--)
        for (int j = 1; j <= i; j++)
        {
            x = std::min(S[i + 1][j], S[i][j - 1]);

            if (x != smin)
                S[i][j] = x + a[i][j];

            else
                S[i][j] = a[i][j];
        }
            
    for (int i = 1; i <= n; ++i)
        smin = std::min(smin, S[i][i]);

    fout << smin;
}