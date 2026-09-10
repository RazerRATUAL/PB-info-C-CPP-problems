#include <fstream>
using namespace std;

ifstream fin("secventa.in");
ofstream fout("secventa.out");

const int Dim = 100001;
int a[Dim];

int main()
{
    int n;
    fin >> n;
    int cnt = 0;
    int cnt_max = 0;
    int dr = 0;
    int st = 0;
    int sum_max = 0;
    int sum = 0;

    for (int i = 1; i <= n; ++i)
    {
        fin >> a[i];
        sum += a[i];
        if (i > 1 && a[i] % 2 != a[i - 1] % 2)
            cnt++;
        else
        {
            cnt = 1;
            sum = a[i];
        }

        if (cnt > cnt_max ||(cnt == cnt_max && sum >= sum_max))
        {
            cnt_max = cnt;
            sum_max = sum;
            dr = i;
            st = i - cnt + 1;
        }

    }
    fout << st << ' ' << dr;

}
