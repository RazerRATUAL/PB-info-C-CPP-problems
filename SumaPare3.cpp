#include <iostream>
using namespace std;

bool caut(int x, int v[10000], int k)
{
    for(int i=0; i<k; i++)
        if(v[i]==x)
            return true;
    return false;
}

int main()
{
    int v[10000], a[100][100], n, m, k = 0, s = 0;
    cin>>n>>m;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
        {
            cin>>a[i][j];
            if(a[i][j]%2==0 && caut(a[i][j], v, k) == false)
                v[k++] = a[i][j], s += a[i][j];
        }
    cout<<s;
}