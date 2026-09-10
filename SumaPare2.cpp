#include <iostream>
using namespace std;
int main()
{
    int n , m , s = 0;
    int a[101][101];
    cin >> n >> m;
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= m ; ++j)
            cin >> a[i][j];

    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= m ;++j)
            if(a[i][j] % 2 == 0)
                s = s + a[i][j];
    cout << s;
    return 0;

}
