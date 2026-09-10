#include <fstream>
#include <vector>

using namespace std;

ifstream cin("bazine.in");
ofstream cout("bazine.out");

int n , m , x , y , v[101];
vector<int> G[101];
vector<vector <int> > CC;

void dfs(int nod, vector<int> &C);

int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for(int i = 1; i <= n ; i++)
        if(!v[i])
        {
            CC.push_back(vector<int>());
            dfs(i,*(CC.end()-1));
        }
    cout << CC.size();
    return 0;
}

void dfs(int nod, vector<int> &C)
{
    v[nod] = 1;
    C.push_back(nod);
    for(auto y : G[nod])
        if(v[y] == 0) dfs(y,C);
}