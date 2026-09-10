#include <vector>
#include <fstream>
#include <queue>
#include <cstring>

#define V 285
using namespace std;
ifstream fin("apa.in");
ofstream fout("apa.out");
int graph[V][V], n;
int parent[V];
bool visited[V];
bool bfs(int N, int G[V][V], int s, int t)
{
    memset(visited, 0, sizeof(visited));
    queue<int> q;
    q.push(s);
    visited[s] = true;
    parent[s] = -1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (int v = 1; v <=N; v++)
        {
            if (visited[v] == false && G[u][v] > 0)
            {
                if (v == t)
                {
                    parent[v] = u;
                    return true;
                }
                q.push(v);
                parent[v] = u;
                visited[v] = true;
            }
        }
    }
    return false;
}
int fordFulkerson(int N, int graph[V][V], int s, int t)
{
    int u, v;
    int rGraph[V][V];
    for (u = 1; u <=N; ++u)
        for (v = 1; v <= N; ++v)
            rGraph[u][v] = graph[u][v];
    int max_flow = 0;
    while(bfs(N, rGraph, s, t))
    {
        int path_flow = INT_MAX;
        for (v = t; v != s; v = parent[v])
        {
            u = parent[v];
            path_flow = min(path_flow, rGraph[u][v]);
        }
        for (v = t; v != s; v = parent[v])
        {
            u = parent[v];
            rGraph[u][v] -= path_flow;
            rGraph[v][u] += path_flow;
        }
        max_flow += path_flow;
    }
    return max_flow;
}
int main()
{
    int x, y, c;
    fin>>n;
    while(fin>>x>>y>>c)
        graph[x][y]=c;
    int sol=fordFulkerson(n,graph,1,n);
    if(sol)
        fout<<sol;
    else
        fout<<"Apa nu ajunge!";
    return 0;
}