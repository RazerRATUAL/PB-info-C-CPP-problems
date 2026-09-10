#include <fstream>
using namespace std;
ifstream fin("parimpar1.in");
ofstream fout("parimpar1.out");

int main()
{
    int n;
    int imp1 = 0, par1 = 0, imp2 = 0, par2 = 0;
    fin >> n;

    for (int i = 1; i <= n; ++i)
    {
        int x;
        fin >> x;
        if (x % 2 == 0)
            par1 += x;
        else
            imp1 += x;
    }

    for (int i = 1; i <= n; ++i)
    {
        int x;
        fin >> x;
        if (x % 2 == 0)
            par2 += x;
        else
            imp2 += x;
    }

    fout << 1LL * par1 * imp2 + 1LL * imp1 * par2;
}