#include <iostream>
using namespace std;

const int N = 101;

bool a[N][N]; 
int n, m;    
int s[N];     
int p[N];     
int ctc;      

void CitesteGraf();
void Dfs(int x);
void DfsT(int x);
void CompTareConexe();


int main()
{
    CitesteGraf();
    CompTareConexe();

    cout << ctc;


    return 0;
}

void CompTareConexe()
{
    for (int x = 1; x <= n; ++x)
        if (!s[x])
        {
            ctc++;
            Dfs(x);
            DfsT(x);

            for (int nod = 1; nod <= n; ++nod)
                if (s[nod] != p[nod])
                    s[nod] = p[nod] = 0;
        }
}

void Dfs(int x)
{
    s[x] = ctc;
    for (int y = 1; y <= n; ++y)
        if (a[x][y] && !s[y])
            Dfs(y);
}

void DfsT(int x)
{
    p[x] = ctc;
    for (int y = 1; y <= n; ++y)
        if (a[y][x] && !p[y])
            DfsT(y);
}

void CitesteGraf()
{
    cin >> n >> m;
    int x, y;
    while (m--)
    {
        cin >> x >> y;
        a[x][y] = true; // G.O.
    }
}

