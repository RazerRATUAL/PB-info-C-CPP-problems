#include <fstream>
#include <vector>
using namespace std;

ifstream cin("subarborenumarare.in");
ofstream cout("subarborenumarare.out");

vector <int> G[101];
int n  , p , k , x , P[101] , cnt;

void dfs(int x){
    P[x] = 1;
    cnt++;
    for(auto i:G[x])
        if(!P[i]) dfs(i);
}
int main(){
    cin >> n >> p;
    for(int i = 1 ; i <= n ; i++){
        cin >> x;
        if(x != 0) G[x].push_back(i);
    }
    dfs(p);
    cout << cnt;
}