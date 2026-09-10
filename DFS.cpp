#include <fstream>
using namespace std;
ifstream cin("dfs.in");
ofstream cout("dfs.out");
int n , m , a[101][101] , x , y , P[101] , p;
void DFS(int v)
{
    cout << v << " ";
    P[v] = 1;
    for(int i = 1 ; i <= n ; i++)
        if(!P[i] && a[v][i] == 1) 
        DFS(i);
}
int main()
{
    cin >> n >> m >> p;
    for(int i = 1 ; i <= m ; i++)
    {
        cin >> x >> y;
        a[x][y] = a[y][x] = 1;
    }
    DFS(p);
}