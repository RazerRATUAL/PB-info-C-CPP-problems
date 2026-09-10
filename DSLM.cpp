#include <fstream>
using namespace std;
ifstream fin("dslm.in");
ofstream fout("dslm.out");
int n,a[25][25],x,y,v[25],viz[25],P,kmax,sol[101];

void DFS(int k);
void Solutie(int k);

int main(){
    fin >> n >> P;
    while(fin >> x >> y){
        a[x][y] = 1;
    }
    v[1] = P;
    viz[P] = 1;
    DFS(2);
    for(int i=1;i<=kmax;i++){
        fout <<sol[i]<<" ";
    }
    return 0;
}

void Solutie(int k){
   for(int i=1;i<=k;i++)
        sol[i]=v[i];
}

void DFS(int k){
    for(int i = 1;i <= n; i++){
        v[k] = i;
        if(a[v[k-1]][v[k]] == 1){
            a[v[k-1]][v[k]] = 0;
            if(k > kmax)
            {
                kmax = k;
                Solutie(k);
            }
            DFS(k + 1);
            a[v[k-1]][v[k]] = 1;
        }
    }
}
