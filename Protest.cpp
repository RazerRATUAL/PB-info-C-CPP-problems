#include <fstream>
#include <vector>

using namespace std;
ifstream cin("protest.in");
ofstream cout("protest.out");
int n , m , x , y , p[50001] , v , cnt , s;
vector <int> G[50001];
void dfs(int d)
{
    p[d] = 1;
    for(int i :G[d])
        if(!p[i]) dfs(i);
}
int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        cin >> s;
        p[s] = -1;
    }
    for(int i = 1 ; i < n ; i++)
    {
        cin >> x >> y;
        if(p[x] != -1 && p[y] != -1)
        G[x].push_back(y);
    }
    dfs(1);
    for(int i = 1 ; i <= n ; i++)
        if(p[i] == 1) cnt++;
    cout << cnt - 1;
}

