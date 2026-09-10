#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin("proiecte.in");
ofstream fout("proiecte.out");

int n;

struct poz
{
    int i , j;
}a[1001];

bool comp(poz a , poz b)
{
    if(a.i < b.i) return 1;
    else if(a.i == b.i && a.j < b.j) return 1;
    else return 0;
}

int main()
{
    fin >> n;
    for(int i = 1 ; i <= n ; i++)
        fin >> a[i].i , a[i].j = i;

    sort(a + 1 , a + n + 1 , comp);

    for(int i = 1 ; i <= n ; i++)
        fout << a[i].j << " ";
}