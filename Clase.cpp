#include <fstream>
using namespace std;

ifstream cin("clase.in");
ofstream cout("clase.out");


int cautareBinara(long long a[], int n, long long val){
    int st = 1, dr = n;
    while(st <= dr){
        int mij = (st + dr) / 2;
        if(a[mij] == val)
            return mij;
        else if(a[mij] > val)
            dr = mij - 1;
        else st = mij + 1;
    }
    return -1;
}

    long long  n, m, pp, s, cnt;
    long long a[10001];
int main()
{
    cin >> n;
    for(int i = 1; i<=n; ++i)
        cin>>a[i];

    cin >> m;
    for(int i = 1; i<=m; ++i)
    {
        cin >> pp;
        s=cautareBinara(a, n, pp);
        if(s != -1)
            cnt++;

    }

    cout<<cnt;


    return 0;
}