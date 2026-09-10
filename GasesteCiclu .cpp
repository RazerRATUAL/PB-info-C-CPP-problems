#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;
#define Inf 0x3f3f3f3f

int n,m;
int x,y;
vector<int> G[105];
int v[105];
int t[105];

void detcicle(int nod){

    int stop = nod;
    cout << nod << ' ';
    nod = t[nod];
    while(nod != stop){
        cout << nod << ' ';
        nod = t[nod];
    }
    cout << stop;
    exit(0);

}

void dfs(int nod,int father){

    t[nod] = father;
    v[nod] = 1;
    for(auto i : G[nod]){
        if(!v[i])
            dfs(i,nod);

        else if(v[i] == 1 && t[i] != nod && t[nod] != i){
            t[i] = nod;
            detcicle(i);
        }
    }
}

int main(){
    
    
    cin >> n >> m;
    for(int i = 1 ; i <= m ; ++i){
        cin >> x >> y;
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for(int i = 1 ; i <= n ; ++i){
        if(!v[i])
            dfs(i,i);
        
    }
    
    

    return 0;
}
