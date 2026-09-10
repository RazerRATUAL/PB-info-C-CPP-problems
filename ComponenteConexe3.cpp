#include <fstream>
#include <vector>
using namespace std;

const int Dim = 101;

ifstream fin("componenteconexe3.in");
ofstream fout("componenteconexe3.out");

int n , x , y , C[Dim] , cnt , maxi , rez , f[Dim];
vector <int> G[Dim];
void dfs(int v , int c)
{
    C[v] = c;
    for(int i : G[v])
        if(!C[i]) dfs(i , c);
}
int main()
{
    fin >> n;
    while(fin >> x >> y)
    {
        G[x].push_back(y);
        G[y].push_back(x);
    }
    for(int i = 1 ; i <= n ; i++)
        if(C[i] == 0) cnt++ , dfs(i , cnt);
    for(int i = 1 ; i <= n ; i++)
        f[C[i]]++;
    for(int i = 1 ; i <= n ; i++)
        if(f[i] > maxi) maxi = f[i] , rez = i;
    fout << rez << " " << maxi;
}