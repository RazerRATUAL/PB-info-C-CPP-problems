#include <iostream>
#include <vector>

using namespace std;

vector <int> G[101];
vector <int> H[101];

int n , m , x , y , k , S[101] , D[101] , c , cnt , maxi , f[101];

void dfs_succ(int nod , int val)
{
    S[nod] = val;
    for(auto p : G[nod])
        if(!S[p]) dfs_succ(p , val);
}

void dfs_pred(int nod , int val)
{
    D[nod] = val;
    for(auto p : H[nod])
        if(!D[p]) dfs_pred(p , val);
}

int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        cin >> x >> y;
        G[x].push_back(y);
        H[y].push_back(x);
    }

    for(int i = 1 ; i <= n ; i++)
        if(!S[i])
        {
            c++;
            dfs_succ(i , c);
            dfs_pred(i , c);
            for(int j = 1 ; j <= n ; j++)
                if(S[j] != D[j]) S[j] = D[j] = 0;
        }

    for(int i = 1 ; i <= n ; i++)
        f[S[i]]++;
    for(int i = 1 ; i <= n ; i++)
        if(f[i] > maxi) maxi = f[i];

    for(int i = 1 ; i <= n ; i++)
        if(f[i] == maxi)
        {
            for(int j = 1 ; j <= n ; j++)
                if(S[j] == i) cout << j << " ";
            cout << '\n';
        }
}