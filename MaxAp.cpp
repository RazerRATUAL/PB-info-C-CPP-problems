#include <iostream>
#include <algorithm>

using namespace std;
int f[1000001]={0};
int main()
{
    int n, m , a[102][102] , v[10000] , p = 0 , maxi = 0;
    cin >> n >> m;
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)
        {
            cin >> a[i][j];
                v[p] = a[i][j];
                p++;
                f[a[i][j]]++;
                if(f[a[i][j]] > maxi)
                    maxi = f[a[i][j]];
        }
    }
    sort(v , v + p);
    for(int i = 0 ; i < p ; ++i)
    {
        if(f[v[i]]==maxi && v[i] != v[i-1])
        cout << v[i] <<" ";
    }
}
