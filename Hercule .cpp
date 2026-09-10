#include <fstream>
using namespace std;
ifstream f("hercule.in");
ofstream o("hercule.out");
const int di[]={-1,0,1,0};
const int dj[]={0,1,0,-1};
int a[100][100], x[100][100], m,n,nr=0;

void Citire()
{
    f>>m>>n;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
           f>>a[i][j];
}

void Creste()
{
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            a[i][j]++;
}

void Scade()
{
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            a[i][j]--;
}

void Hercule(int i, int j, int pas)
{
    Scade();
    x[i][j]=pas;
    if(i==m&&j==n)
        nr++;
    else
    for(int d=0;d<4;d++)
    {
        int inou=i+di[d];
        int jnou=j+dj[d];
        if(a[inou][jnou]>0 && x[inou][jnou]==0)
            {
                 Hercule(inou,jnou,pas+1);
            }
    }
    x[i][j]=0;
    Creste();
}

int main()
{
    Citire();
     Hercule(1,1,1);
    o<<nr;
    f.close();
    o.close();
    return 0;
}