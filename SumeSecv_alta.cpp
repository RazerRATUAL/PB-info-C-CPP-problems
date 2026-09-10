#include <fstream>
using namespace std;

ifstream fin("sumesecv.in");
ofstream fout("sumesecv.out");

const int Dim = 101;
int a[Dim], n;
int rez[Dim];

int main()
{
    int x, y, m;
    fin >> n;

    for (int i = 1; i <= n; ++i)
        fin >> a[i];

    fin >> m;

    for (int i = 1; i <= m; ++i)
    {
        fin >> x >> y;
        int s = 0;

        for (int j = x; j <= y; ++j)
            s += a[j];
        rez[i] = s;
    }

    for (int i = 1; i <= m; ++i)
        fout << rez[i] << ' ';

    return 0;
}