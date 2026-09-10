#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;

ifstream fin ("gama.in");
ofstream fout("gama.out");

const int Dim = 3e6;
int a[Dim];

int main()
{
    int n, k;
    int poz = 0;
    int minim;

    fin >> n >> k;

    for (int i = 1; i <= n; ++i)
        fin >> a[i];

    for (int i = 1; i <= n; ++i)
    {
        poz = 0;

        if (k == 0)
            break;

        minim = a[i];
        for (int j = i + 1; j <= i + k; ++j)
        {
            if (a[j] == 0)
                break;

            else if (a[j] < minim)
            {
                poz = j;
                minim = a[j];
            }
        }

        for (int x = poz; x > i; --x)
        {
            swap(a[x], a[x - 1]);
            --k;
        }

    }

    for (int i = 1; i <= n; ++i)
        fout << a[i] << ' ';

    return 0;
}
