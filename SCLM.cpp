#include <fstream>
using namespace std;

ifstream fin("sclm.in");
ofstream fout("sclm.out");

int n, a[1001], L[1001], t[1001], k, l, kmax, Lmax;

int main()
{
    fin >> n;

    for (int i = 1; i <= n; i++)
        fin >> a[i];

    for (int i = n; i >= 1; i--)
    {
        k = i, l = 0;
        for (int j = i + 1; j <= n; j++)
            if(L[j] > l && a[i] <= a[j])
            {
                l = L[j];
                k = j;
            }
        L[i] = l + 1;
        t[i] = k;

        if(L[i] > Lmax)
        {
            Lmax = L[i];
            kmax = i;
        }
    }

    fout << Lmax << '\n';

    k = kmax;

    while(k !=t[k])
    {
        fout << k << ' ';
        k = t[k];
    }

    fout << k;

    return 0;      
}