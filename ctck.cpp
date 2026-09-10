#include <iostream>
using namespace std;

const int N = 101;

bool a[N][N]; 
int n, m, k;     
int s[N];     
int p[N];     
int ctc;

int cnt = 0;

void CitesteGraf();
void Dfs(int x);
void DfsT(int x);
void CompTareConexe();

int main(){
    CitesteGraf();
    CompTareConexe();
    cout << cnt;
    return 0;
}

void CompTareConexe(){
    Dfs(k);
    DfsT(k);
    for (int nod = 1; nod <= n; ++nod)
        if(s[nod] != p[nod])
            s[nod] = p[nod] = 0;

    for (int nod = 1; nod <= n; ++nod)
        if(s[nod] == 1)
        cnt++;
}

void Dfs(int x){
        s[x] = 1;
    for (int y = 1; y <= n; ++y)
        if (a[x][y] && !s[y])
            Dfs(y);
}

void DfsT(int x){
        p[x] = 1;
    for (int y = 1; y <= n; ++y)
        if (a[y][x] && !p[y])
            DfsT(y);
}

void CitesteGraf(){
    cin >> n >> m >> k;
    int x, y;
    while (m--)
    {
        cin >> x >> y;
        a[x][y] = true; 
    }
}