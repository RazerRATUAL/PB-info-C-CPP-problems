#include <fstream>
using namespace std;

ifstream f("sort_div.in");
ofstream g("sort_div.out");

int prima(int x)
{
    while (x > 9) x /= 10;
    return x;
}

int NrDiv(int x)
{
    int P = 1, d = 2, p;
    while (x > 1)
    {
        p = 0;
        while (x % d == 0)
        {
            x /= d;
            p++;
        }
        P *= (p + 1);
        if (d == 2) d = 3;
        else d += 2;
        if (d * d > x && x > 1) d = x;
    }
    return P;
}

struct nr
{
    int val, div, control, cif;
}
v[16384];

int partitionare(nr a[], int st, int dr){
    int poz = st;
    for(int i = st; i < dr; ++i)
        if(a[i] < a[dr]){
            swap(a[i], a[poz]);
            poz++;
        }
    swap(a[poz], a[dr]);
    return poz;
}

void quickSort(nr a[], int st, int dr){
    if(st < dr){
        int poz = partitionare(a, st, dr);
        quickSort(a, st, poz-1);
        quickSort(a, poz+1, dr);
    }
}

int n, i;
int main()
{
    f >> n;
    for (i = 1; i <= n; i++)
    {
        f >> v[i].val;
        v[i].div = NrDiv(v[i].val);
        v[i].control = v[i].val % 9;
        if(v[i].control == 0) v[i].control = 9;
        v[i].cif = prima(v[i].val);
    }
    quickSort(v, 1, n);
    for (i = 1; i <= n; i++) g << v[i].val << " ";
    f.close();
    g.close();
    return 0;
}