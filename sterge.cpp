#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin ("sterge.in");
ofstream fout("sterge.out");

const int Dim = 1001;
int a[Dim];
int diviz[2501];
int cnt = 0;

void Divizori(int n);

int main()
{
    int n;
    int maxim = 0;
    fin >> n;

    for (int i = 1; i <= n; ++i) // citim sirul si aflam valoarea maxima
    {
        fin >> a[i];

        if (a[i] > maxim)
            maxim = a[i];
    }

    Divizori(maxim);

    diviz[cnt + 1] = maxim;   // adaugam valoarea maxima in sirul ''elementelor care trebuie eliminate''

    for (int i = n; i >= 1; --i)
    {
        for (int j = 1; j <= cnt + 1; ++j)   // verificam daca elementul face parte din sirul '' elementelor eliminate''
        {
            if (a[i] == diviz[j])
            {
                for (int k = i; k <= n; ++k)    // suprascriem elementele problema din sir si restrangem sirul nou obtinut, aducem spre stanga elementele care nu trebuie sterse
                    a[k] = a[k + 1];

                --n;
            }
        }
    }

    for (int i = 1; i <= n; ++i)    // afisam sirul final
        fout << a[i] << ' ';

    return 0;
}

void Divizori(int n)
{
    int p = 0;
    int x = 1;

    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            diviz[x] = i;
            ++x;
            ++cnt;

            p = n / i;

            if (p != i)
            {
                diviz[x] = p;
                ++x;
                ++cnt;
            }

        }
    }

    sort(diviz + 1, diviz + cnt + 1); // aflam divizorii valorii maxime si ii sortam

}

