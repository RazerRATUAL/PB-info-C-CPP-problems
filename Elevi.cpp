#include <iostream>
using namespace std;
int main()
{
    int n , m , ok = 0 , cnt = 0 , a[1001][1001] , maxi = 0;
    cin >> n >> m;
    for(int i = 0 ; i < n ; ++i)
    {
        for(int j = 0 ; j < m ; ++j)
        {
            cin >> a[i][j];
            if(a[i][j] > maxi) maxi = a[i][j];
        }
    }
    for(int i = 0 ; i < n ; ++i)
    {
        ok = 0;
        for(int j = 0 ; j < m ; ++j)
        {
            if(a[i][j] == maxi) ok = 1;
        }
        if(ok == 1) cnt++;
    }
    cout << maxi << " "<<cnt;
    return 0;
}
