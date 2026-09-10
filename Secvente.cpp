#include <fstream>
using namespace std;

ifstream fin("secvente.in");
ofstream fout("secvente.out");

const int Dim = 1001;
int a[Dim], n;

int main()
{
    int cnt = 0;
    fin >> n;

    for (int i = 1; i <= n; ++i)
        fin >> a[i];

    for (int i = 1; i < n; ++i)
        if (a[i] > a[i + 1])
            cnt++;

    fout << cnt + 1;

    return 0;
}
