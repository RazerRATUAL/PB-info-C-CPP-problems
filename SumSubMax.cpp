#include <vector>
#include <fstream>
#include <algorithm>

using namespace std;

ifstream cin("sumsubmax.in");
ofstream cout("sumsubmax.out");

const int NMax = 100;
vector <int> G[NMax];
int n  , p , x , y , k , T[NMax] , P[NMax] , C[NMax] , d[NMax];

int DFS(int x);


int main(){
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        cin >> T[i];
        if(T[i] != 0)
            G[T[i]].push_back(i);
        if(T[i] == 0) p = i;
    }

    for(int i = 1 ; i <= n ; i++)
        cin >> C[i];

    d[p] = DFS(p);
    int maxi = -9999;
    for(int i = 1 ; i <= n ; i++)
        if(d[i] > maxi) maxi = d[i];

    for(int i = 1 ; i <= n ; i++)
        if(d[i] == maxi) cout << i << " ";
}

int DFS(int x){
    P[x] = 1;
    d[x] = C[x];
    for(auto i:G[x])
        if(!P[i]){
            d[x] += DFS(i);
        }
    return d[x];
}