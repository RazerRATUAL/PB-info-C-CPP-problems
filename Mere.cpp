#include <vector>
#include <fstream>

using namespace std;

ifstream in ("mere.in");
ofstream out ("mere.out");

int n, x, y, v[1001], a[1001][1001], s, mx, viz[1001], poz;

void DFS(int nc)
{
    s += v[nc];
    viz[nc] = 1;
    mx = 0;
    poz = 0;
    for (int i = 1; i <= n; i++)
    {
        if (!viz[i] && (v[i] > mx) && a[i][nc])
        {
            poz = i;
            mx = v[i];
        }
    }
    if (poz)
        DFS(poz);
}

int main()
{
    in >> n;
    for (int i=1; i<=n; i++)
        in >> v[i];
    for (int i=1; i<n; i++)
    {
        in >> x >> y;
        a[x][y] = a[y][x] = 1;
    }
    DFS(1);
    out << s;
    return 0;
}
