#include <fstream>
#include <vector>

using namespace std;
ifstream cin("arbore.in");
ofstream cout("arbore.out");
vector <int> G[101];
int n  , p , x , y , T[102] , P[101];
void dfs(int x)
{
    P[x] = 1;
    for(auto i:G[x])
        if(!P[i])
        {
            T[i] = x;
            dfs(i);
        }
}
int main()
{
    cin >> n >> p;
    for(int i = 1 ; i < n ; i++)
    {
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    dfs(p);
    for(int i = 1 ; i <= n ; i++)
        cout << T[i] << " ";
}