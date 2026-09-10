#include <fstream>

using namespace std;

ifstream cin ("produscartezian1.in");
ofstream cout ("produscartezian1.out");

int n,m,x[7];

void afisare ()
{
    for (int i=1; i<=m; ++i) cout<<x[i]<<" ";
    cout<<"\n";
}

void bectreching (int k)
{
    for (int i=1; i<=n; ++i)
    {
        x[k]=i;
        if (k<m) bectreching(k+1);
        else afisare();
    }
}

int main()
{
    cin>>n>>m;
    bectreching(1);

    return 0;
}