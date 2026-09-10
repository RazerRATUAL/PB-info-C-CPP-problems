#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin("partitiinumar4.in");
ofstream fout("partitiinumar4.out");

int x[50], a[50]; /// x[k] este al k-lea termen al partitiei curente
int n, m;     /// numarul care trebuie partitionat

void PartNr(int k, int s); /// s = x[1] + x[2] + ... + x[k - 1]
void ScrieSol(int k);


int main()
{
    fin >> n >> m;
    for(int i = 1; i<= m; ++i)
        fin >> a[i];
    sort(a + 1, a + m + 1);
    x[0] = 1;
    PartNr(1, 0);
}

void PartNr(int k, int s) /// s = x[1] + x[2] + ... + x[k - 1]
{
    if (s == n)
    {
        ScrieSol(k - 1);
        return;
    }
    for (int i = x[k - 1]; a[i] + s <= n; ++i)
    {
        x[k] = i;
        PartNr(k + 1, s + a[i]);
    }
}
void ScrieSol(int k)
{
    for (int i = 1; i < k; ++i)
        fout << a[x[i]] << ' ';
        fout << '\n';
}








