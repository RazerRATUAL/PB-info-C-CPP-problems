#include <fstream>
#define N 500
using namespace std;
int n,x,a[N][N],v[N],c[N];

void citire()
{
    int m,i,j;
    ifstream f("BFS.in");
    f>>n>>m>>x;
    while(m--)
        f>>i>>j,a[i][j]=a[j][i]=1;
    f.close();
}

void BFS(int start)
{
    ofstream g("BFS.out");
    int st=1,dr=0;
    v[start]=1;
    c[++dr]=start;
    while(st<=dr)
    {
        int k=c[st];
        for(int i=1;i<=n;++i)
            if(a[k][i]&&!v[i])
                v[i]=1,c[++dr]=i;
        g<<k<<' ';
        ++st;
    }
    g.close();
}

int main()
{
    citire();
    BFS(x);
    return 0;
}