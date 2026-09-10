#include <iostream>

using namespace std;
int main()
{
    int n,a[101][101],m,s=0,maxim=-1,imax=-1;
    cin >> n >> m;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> a[i][j];
    for(int i = 0; i < n; ++i)
    {
        s = 0;
        for(int j = 0; j < m; ++j)
        {
            if(a[i][j]%2==0)
                s = s + a[i][j];
        }
        if(s >= maxim)
        {
            maxim = s;
            imax = i;
        }
    }
    cout << imax + 1;
    return 0;
}
