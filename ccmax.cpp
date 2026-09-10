#include <fstream>
using namespace std;
 
ifstream cin("ccmax.in");
ofstream cout("ccmax.out");
 
const int N = 101;
bool a[N][N];
int c[N];
int n, m;
int cc;
int cmx[N], cntmx, mx;
 
void CitesteGraf();
void ComponenteConexe();
void Dfs(int x);
void ConexMax();
 
int main()
{
    CitesteGraf();
    ComponenteConexe();
    ConexMax();
    return 0;
}
 
void ComponenteConexe()
{
    for (int nod = 1; nod <= n; ++nod)
        if (!c[nod])
        {
            cc++;
            Dfs(nod);
        }
}
 
void Dfs(int x)
{
    c[x] = cc;
    for (int y = 1; y <= n; ++y)
        if (a[x][y] && !c[y])
            Dfs(y);
}
 
void CitesteGraf()
{
    cin >> n;
    int x, y;
    while (cin >> x >> y)
    {
        a[x][y] = a[y][x] = true;
    }
}
 
void ConexMax()
{
    for (int i = 1; i <= n; ++i)
    {
        cmx[c[i]]++;
        if (cmx[c[i]] == mx)
            cntmx++;
        if (cmx[c[i]] > mx)
        {
            mx = cmx[c[i]];
            cntmx = 1;
        }
    }
 
    cout << mx << ' ' << cntmx;
}