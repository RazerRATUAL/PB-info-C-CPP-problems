#include <fstream>
using namespace std;
 
ifstream cin("componenteconexe5.in");
ofstream cout("componenteconexe5.out");
 
const int N = 1001;
bool a[N][N];
int c[N];
int n, m, q, Q[N];
int cc;
int cmx[N];
 
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
    cin >> n >> m;
    int x, y;
    for(int i = 1; i <= m; ++i)
    {
        cin >> x >> y;
        a[x][y] = a[y][x] = true;
    }
    cin >> q;
    for (int i = 1; i <= q; ++i)
        cin >> Q[i];
}
 
void ConexMax()
{
    for (int i = 1; i <= n; ++i)
        cmx[c[i]]++;
 
    for (int i = 1; i <= q; ++i)
        cout << cmx[c[Q[i]]] << '\n';
}