#include <fstream>
using namespace std;

ifstream fin("inserare2.in");
ofstream fout("inserare2.out");

int main()
{
    int n, m, m1 = 0, m2 = 0, x;
    fin >> n >> m;
    fin >> m1;
    for (int i = 2; i <= n; i++)
    {
        fin >> m2;
    }
    int poz = -1, y;
    fin >> x;
    for (int i = 2; i <= m; i++)
    {
        fin >> y;
        if (m1 > x && m2 < y)
            poz = i;
        x = y;
    }
    if (poz != -1)
        fout << poz;
    else
        fout << "imposibil";
}