#include <fstream>
#include <cmath>

using namespace std;
ifstream cin("gcd.in");
ofstream cout("gcd.out");
int n , a[1000001] , b[1000001] , c , maxi , x[1000001] , y[1000001];
int main()
{
    cin >> n;
    for(int i = 1 ; i <= n ; ++i)
    {
        cin >> c;
        a[c]++;
        if(c > maxi) maxi = c;
    }
    for(int i = 1 ; i <= n ; ++i)
    {
        cin >> c;
        b[c]++;
        if(c > maxi) maxi = c;
    }
    for(int i = 1 ; i <= maxi ; ++i)
        for(int j = i ; j <= maxi ; j += i)
        {
            if(a[j] != 0) x[i] = max(x[i] , j);
            if(b[j] != 0) y[i] = max(y[i] , j);
        }
    int ok = 0;
    for(int i = maxi ; i >= 0 ; --i)
        if(x[i]&&y[i]) break;
        else ok++;
    cout << maxi - ok;
    return 0;
}
