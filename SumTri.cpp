#include <fstream>
using namespace std;

ifstream cin("sumtri.in");
ofstream cout("sumtri.out");

int n , a[101][101] , maxi;

int main()
{
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
            cin >> a[i][j];
    }
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= i ; j++)
            a[i][j] += max(a[i - 1][j] , a[i - 1][j - 1]);
    }
    for(int i = 1 ; i <= n ; i++)
        maxi = max(a[n][i] , maxi);

    cout << maxi;
}