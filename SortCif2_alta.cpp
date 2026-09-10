#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin ("sortcif2.in");
ofstream fout("sortcif2.out");

const int Dim = 101;
int a[Dim];

int PrCif (int n);

int main()
{
    int n;
    fin >> n;

    for (int i = 1; i <= n; ++i)
        fin >> a[i];

    for (int i = 1; i < n; ++i)
    {
        for (int j = i + 1; j <= n; ++j)
        {
            if (PrCif(a[i]) > PrCif(a[j]))
                swap (a[i], a[j]);
        }
    }

    for (int i = 1; i <= n; ++i)
        fout << a[i] << ' ';

    return 0;

}

int PrCif (int n)
{
    int r = 0;

    while (n)
    {
        if (n < 10)
            r = n;

        n /= 10;
    }

    return r;
}
