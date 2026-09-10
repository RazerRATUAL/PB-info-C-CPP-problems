#include <iostream>
#include <fstream>

using namespace std;

ifstream in("componenteconexe2.in");
ofstream out("componenteconexe2.out");

int a[109][109],i,j,n,c[109],nrv[109],nrm[109],k,N;

void dfs(int nod,int k)
{
    c[nod]=k;
    nrv[k]++;
    for (int i=1;i<=n;i++)
    {
        if (c[i]==0 && a[nod][i]==1) dfs(i,k);
    }
}

int main()
{
    in>>n;
    while (in>>i>>j) a[i][j]=a[j][i]=1;
    for (int i=1;i<=n;i++)
    {
        if (c[i]==0) k++,dfs(i,k);
    }
    for (int i=1;i<n;i++)
    {
        for (int j=i+1;j<=n;j++)
        {
            if (a[i][j]) nrm[c[i]]++; ///c[i] retine indicele comp conexe
        }
    }
    for (int i=1;i<=k;i++) N=N+(nrm[i]-(nrv[i]-1)); ///nr_muchii - (nr_varfuri - 1)
    out<<N; ///numarul de muchii ce se pot elimina
}