#include <fstream>
using namespace std;

ifstream fin ("secvcresc.in");
ofstream fout("secvcresc.out");

const int Dim = 10001;
int a[Dim];

int main()
{
    int n;
    int cnt = 0;
    int cnt_max = 0;
    int st = 0;
    int dr = 0;

    fin >> n;

    for (int i = 1; i <= n; ++i)
    {
        fin >> a[i];

        if (a[i] > a[i - 1] && i > 1)
            ++cnt;

        else
            cnt = 0;

        if (cnt > cnt_max)
        {
            cnt_max = cnt;
            dr = i;
            st = i - cnt;
        }
    }

    fout << st << ' ' << dr;

    return 0;
}
