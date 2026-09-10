#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

stack <int> S;
const int NMax = 100001;
int n , m , x , y , v[NMax] , L[NMax];
int cnt , inS[NMax] , rez , e , s[NMax] , viz[NMax] , T[NMax];
vector <int> G[NMax];
vector <int> P[NMax];
vector <int>c;
vector <vector<int>> cc;

void Tarjan(int nod);
void Citire();

int main(){
    cin >> n >> m;
    for(int i = 1 ; i <= m ; i++)
    {
        cin >> x >> y;
        G[x].push_back(y);
    }

    for(int i = 1 ; i <= n ; i++)
        if(!v[i]) cnt = 0 , Tarjan(i);

    int c = 1;
    for(int i = 1 ; i <= n ; i++)
        if(!T[s[i]]) T[s[i]] = c++;
    for(int i = 1 ; i <= n ; i++)
        s[i] = T[s[i]];

    for(int i = 1 ; i <= n ; i++)
        for(auto j : G[i])
            if(s[i] != s[j]) P[s[i]].push_back(s[j]) , viz[s[i]] = viz[s[j]] = 1;

    for(int i = 1 ; i <= rez; i++)
    {
        sort(P[i].begin() , P[i].end());
    }
    for(int i = 1 ; i <= rez ; i++)
    {
        int ok = 0;
        for(auto j:P[i]) ok++;

        if(viz[i] != 0 && ok == 0) cout << 0 << '\n';

        if(ok != 0)
        {
            for(auto j : P[i])
                cout << j << " ";
            cout << '\n';
        }

    }

}
void Citire(){
    
}
void Tarjan(int nod){
    cnt++;
    v[nod] = L[nod] = cnt;
    S.push(nod);
    inS[nod] = 1;
    for(auto i:G[nod]){
        if(!v[i]) Tarjan(i) , L[nod] = min(L[nod] , L[i]);
        else if(inS[i] == 1) L[nod] = min(L[nod] , v[i]);
    }
    if(v[nod] == L[nod]){
        c.clear();
        while(1)
        {
            int val = S.top();
            S.pop();
            c.push_back(val);
            inS[val] = 0;
            if(nod == val) break;
        }
        rez++;
        for(auto i:c)
            s[i] = rez;
    }
}