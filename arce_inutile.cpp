#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <cstdlib>
using namespace std;

const int max_nodes = 100;
vector<int> graph[max_nodes];
vector<int> graphT[max_nodes];
stack<int> node_order;
bool v[max_nodes];
int nodeToSCC[max_nodes];

void dfs(int n) {
    if(v[n]) return;
    v[n] = true;
    for(int i = 0; i < graph[n].size(); i++)
        dfs(graph[n][i]);
    node_order.push(n);
}

void dfsT(int n, int count) {
    if(v[n]) return;
    v[n] = true;
    nodeToSCC[n] = count;
    for(int i = 0; i < graphT[n].size(); i++)
        dfsT(graphT[n][i], count);
}

void kosaraju(int n) {
    int count = 0;
    for(int i = 1; i <= n; i++)
        if(!v[i])
            dfs(i);
    for(int i = 1; i <= n; i++)
        v[i] = false;
    while(!node_order.empty()) {
        int i = node_order.top();
        node_order.pop();
        if(!v[i]) {
            dfsT(i, count);
            count += 1;
        }
    }
}

void useless(int n) {
    int count = 0;
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if( i != j &&
                nodeToSCC[i] != nodeToSCC[j] && 
                std::find(graph[i].begin(), graph[i].end(), j) != graph[i].end()) {
                count += 1;
            }
                
        }
    }
    cout<<count<<"\n";
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if( i != j &&
                nodeToSCC[i] != nodeToSCC[j] && 
                std::find(graph[i].begin(), graph[i].end(), j) != graph[i].end()) {
                cout<<i<<" "<<j<<"\n";
            }     
        }
    }
}

int main() {
    int n, m, a, b;
    cin >> n >> m;
    for(int i = 0; i < m; i++) {
        cin >> a >> b;
        graph[a].push_back(b);
        graphT[b].push_back(a);
    }
    kosaraju(n);
    useless(n);
}