#include <fstream>
#include <vector>

using namespace std;

ifstream cin("retea.in");
ofstream cout("retea.out");
int n , x , y , C[101] , m;
vector <int> G[101];

void dfs(int v , int x)
{
    C[v] = 1;
    for(int i : G[v])
        if(!C[i] && i != x) dfs(i , x);
}

int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for(int i = 1 ; i <= n ; i++)
    {
        if(i != 1)
        {
            for(int j = 1 ; j <= n ; j++) C[j] = 0;
            dfs(1 , i);
            int ok = 0;
            for(int j = 1 ; j <= n ; j++)
                if(C[j] == 0 && j != i) ok = 1;
            cout << ok << " ";
        }
        else
        {
            for(int j = 1 ; j <= n ; j++) C[j] = 0;
            dfs(2 , i);
            int ok = 0;
            for(int j = 1 ; j <= n ; j++)
                if(C[j] == 0 && j != i) ok = 1;
            cout << ok << " ";
        }
    }
}
