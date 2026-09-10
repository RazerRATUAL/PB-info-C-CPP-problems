#include <iostream>
#include <vector>
#include <set>

const int NMax = 100001;
using namespace std;
vector <int> G[NMax];
int n  , p , x , y , k , T[NMax] , P[NMax];
void dfs(int x)
{
    P[x] = 1;
    for(auto i:G[x])
        if(!P[i]) dfs(i);
}
int main()
{
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> T[i];
        if(T[i] != 0)
        {
            G[T[i]].push_back(i);
            G[i].push_back(T[i]);
        }
        if(T[i] == 0) p = i;
    }
    dfs(p);
    int ok = 0;
    for(int i = 1 ; i <= n ; i++)
        if(!P[i]) ok++;
    if(ok == 0 && p != 0) cout << "DA";
    else cout << "NU";
}