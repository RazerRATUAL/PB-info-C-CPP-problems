#include <fstream>
#include <vector>

using namespace std;

ifstream cin("topsort.in");
ofstream cout("topsort.out");

vector <int> G[100001];
vector <int> L;
int n , m , x , y , v[100001];

void dfs(int nod)
{
    v[nod] = 1;
    for(auto i : G[nod])
        if(!v[i]) v[i] = 1 , dfs(i);
    L.push_back(nod);
}

int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        cin >> x >> y;
        G[x].push_back(y);
    }

    for(int i = 1 ; i <= n ; i++)
        if(!v[i]) dfs(i);

    for(int i = L.size() - 1 ; i >= 0 ; i--)
        cout << L[i] << " ";
}