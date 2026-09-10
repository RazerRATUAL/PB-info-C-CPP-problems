#include <fstream>
using namespace std;
ifstream fin("nrcompconexe.in");
ofstream fout("nrcompconexe.out");

int m,n,viz[101],a[101][101],c[101],nc;

void citire()
{
    fin>>n>>m;
    int x,y;
    for(int i=1;i<=m;i++)
    {
        fin>>x>>y;
        a[x][y]=a[y][x]=1;
    }
}

void BFS(int nod, int nc)
{
    int z,st,dr;
    st=dr=1;
    viz[nod]=nc;
    c[st]=nod;
    while(st<=dr)
    {
        z=c[st];
        for(int i=1;i<=n;i++)
            if(a[i][z]==1 && viz[i]==0)
            {
                dr++;
                c[dr]=i;
                viz[i]=nc;
            }
        st++;
    }

}

int nod_nevizitat()
{
    for(int i=1;i<=n;i++)
        if(viz[i]==0)
        return i;
        return 0;
}

int main()
{
    int nod;
    citire();
    nod=nod_nevizitat();
    while(nod)
    {
        nc++;
        BFS(nod,nc);
        nod=nod_nevizitat();
    }
    fout<<nc;
    return 0;
}