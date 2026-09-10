#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin("alfa.in");
ofstream fout("alfa.out");

int a[1001];

int main()
{
    int n, x;
    fin >> n >> x;
    for(int i = 1; i <= n; ++i)
        fin >> a[i];
    int st = 1, dr = 1;
    for(int i = 1; i <= n; ++i)
    {
        if(a[i] == x)
        {
            sort(a + st, a + dr);
            st = dr + 1;
        }
        dr++;
    }
    for(int i = 1; i <= n; ++i)
        fout << a[i] << ' ';
}
