#include <fstream>
using namespace std;

ifstream fin ("secvmax.in");
ofstream fout("secvmax.out");

const int Dim = 10001;
int a[Dim];

int main()
{
    int n;
    int suma = 0;
    int sum_max = 0;
    int cnt = 0;
    int cnt_max = 0;
    int st = 0;
    int dr = 0;

    fin >> n;

    for (int i = 1; i <= n; ++i)
    {
        fin >> a[i];

        if (a[i] % 2 == 0)
        {
            ++cnt;
            suma += a[i];
        }

        else
        {
            cnt = 0;
            suma = 0;

        }

        if (cnt > cnt_max || (cnt == cnt_max && suma > sum_max))
        {
            sum_max = suma;
            cnt_max = cnt;
            dr = i;
            st = i - cnt + 1;
        }
    }

    fout << st << ' ' << dr;

    return 0;
}
