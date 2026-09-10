#include <fstream>
using namespace std;

ifstream fin("numere2.in");
ofstream fout("numere2.out");

const int Dim = 25001;
int a[Dim];

int main()
{
    int n;
    fin >> n;
    int cnt = 0;

    for (int i = 1; i <= n; ++i)
    {
        fin >> a[i];
        if (a[i] == a[i - 1])
        {
            cnt++;
            n -= 2;
            i -= 2;
        }
    }

    fout << cnt << '\n';

    for (int i = 1; i <= n; ++i)
        fout << a[i] << ' ';

    return 0;
}