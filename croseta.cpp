#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin ("croseta.in");
ofstream fout("croseta.out");

int n;

void CitesteDate();
int Cb(int x);
void Solve();

int main()
{
    CitesteDate();
    Solve();
}

void Solve()
{
    int k = n / 2;

    int rasp = Cb(k);

    fout << rasp;

}

int Cb(int x)
{
    int st = 1, dr = 1e9, m;
    int poz = 0;
    int suma = 0;
    int copie;

    while (st <= dr)
    {
        suma = 0;
        m = (st + dr) / 2;

        copie = m;

        while (copie)
        {
            suma += copie;

            if (copie == 2)
                copie = 1;

            else
                copie /= 3;

        }

        if (x == suma)
        {
            return m;

        }

        else if (x < suma)
            dr = m - 1;

        else
            st = m + 1;
    }

    return poz;
}

void CitesteDate()
{
    fin >> n;
}
