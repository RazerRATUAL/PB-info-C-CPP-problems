#include <iostream>
#include <cmath>
#include <queue>

using namespace std;

int n,m,x,y;
queue<int > q;
vector<int> G[100005];
int GradInt[100005];
int LPT[100005];

int main(){

    cin >> n >> m;
    for(int i = 1 ; i <= m ; ++i){

        cin >> x >> y;
        G[x].push_back(y);
        GradInt[y]++;

    }
    for(int i = 1 ; i <= n ; ++i)
        if(GradInt[i] == 0)
            q.push(i);

    while(!q.empty()){

        int x = q.front();
        q.pop();
        for(auto i : G[x]){
            GradInt[i]--;
            LPT[i] = max(LPT[i],1 + LPT[x]);
            if(GradInt[i] == 0)
                q.push(i);
        }

    }
    int maxi = 0;
    for(int i = 1 ; i <= n ; ++i)
        if(LPT[i] > maxi)
            maxi = LPT[i];

    cout << maxi;

    
    return 0;
}