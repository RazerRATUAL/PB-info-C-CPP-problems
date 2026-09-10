#include <fstream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;
#define Inf 0x3f3f3f3f

ifstream cin("ff.in");
ofstream cout("ff.out");

int n,m;
int x,y;
int scad;
vector<int> G[100005];
int g[100005];
int f[100005];

int main(){

    cin >> n >> m;
    for(int i = 1 ; i <= m ; ++i){
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
        g[x]++;
        g[y]++;
    }

    queue<int> q;
    for(int i = 1 ; i <= n ; ++i)
        if(g[i] == 1)
            q.push(i),g[i] = 0,f[i] = 1;
        else if(g[i] == 0)
            scad++;

    while(!q.empty()){

        x = q.front();
        scad++;
        q.pop();
        for(auto i : G[x]){
            g[i]--;
            
            if(g[i] < 2 && f[i] == 0)
                q.push(i),f[i] = 1;

            
        }
    }
    cout << n - scad;


    
    return 0;
}