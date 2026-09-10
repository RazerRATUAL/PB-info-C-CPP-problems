#include <fstream>
#include <queue>
using namespace std;

ifstream cin("bipartit1.in");
ofstream cout("bipartit1.out");

int a[20][20], p[20];
int v[20], n, m , q , w;
queue<int> Q;

void Bfs(int x)
{
    v[x] = 1;
    Q.push(x);
    while(!Q.empty())
    {
        int k = Q.front();
        Q.pop();
        p[k] = true;
        for(int i = 1 ; i <= n ; i++)
            if(!p[i] && a[k][i])
            {
                v[i] = - v[k];
                Q.push(i);
            }
    }
}

int ver()
{
    int ok = 1;
    for(int i = 1 ; i <= n && ok; i++)
        for(int j = i + 1 ; j <= n ; j++)
            if(v[i] == v[j] && a[i][j]) ok = 0;
    if(ok) return 1;
    return 0;
}

int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        cin >> w >> q;
        a[w][q] = a[q][w] = 1;
    }

    for(int i = 1 ; i <= n ; i++)
        if(!p[i]) Bfs(i);

    if(ver())
    {
        cout << "DA" << '\n';
        for(int i = 1 ; i <= n ; i++)
            if(v[i] == 1) cout << i << " ";
        cout << '\n';
        for(int i = 1 ; i <= n ; i++)
            if(v[i] == -1) cout << i << " ";
        cout << '\n';
    }
    else cout << "NU";
    return 0;
}