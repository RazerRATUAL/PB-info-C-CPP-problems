#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector <int> G[101];

int n , a[101][101] , ok , x , y , p , m , v[101] , d[101] , cnt , rez[101];

void bfs(int s){
    queue <int> Q;
    v[s] = 1;
    d[s] = 1;
    Q.push(s);
    while(!Q.empty())
    {
        int x = Q.front();
        for(int i : G[x])
            if(!v[i])
            {
                Q.push(i);
                v[i] = 1;
                d[i] = d[x] + 1;
            }
        Q.pop();
    }
}

int main()
{
    cin >> n >> p >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        cin >> x >> y;
        G[x].push_back(y);
    }
    bfs(p);
    for(int i = 1 ; i <= n ; i++)
        if((d[i] - 1) % 2 == 0 && i != p) cnt++ , rez[cnt] = i;

    cout << cnt << '\n';
    for(int i = 1 ; i <= cnt ; i++)
        cout << rez[i] << " ";
}