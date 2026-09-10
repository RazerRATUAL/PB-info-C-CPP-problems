#include <fstream>

using namespace std;
ifstream cin("cladire3.in");
ofstream cout("cladire3.out");

int n , m , a[205][205] , cnt , s[205][205];
int inf = 1e7;
int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n + 1; i++)
        for(int j = 0 ; j <= m + 1; j++)
            a[i][j] = inf;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            cin >> a[i][j];
    for(int i = n ; i >= 1 ; i--)
        for(int j = 1 ; j <= m ; j++)
            if(i != n  || j != 1) a[i][j] +=  min(a[i + 1][j] , a[i][j - 1]);
    cout << a[1][m] << '\n';
    return 0;
}