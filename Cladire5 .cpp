#include <fstream>
#include <algorithm>

using namespace std;
ifstream cin("cladire5.in");
ofstream cout("cladire5.out");
int n , m , a[201][201] , maxi , b[201][201] , sum;
struct poz
{
    int i , j;
}rasp[401];

bool inside(int i , int j)
{
    return i >= 1 && i <= n && j >= 1 && j <= m;
}
int main()
{
    cin >> n >> m >> sum;
    for(int i = 1 ; i <= n ; i++)
    {
        for(int j = 1 ; j <= m ; j++)
            cin >> a[i][j];
    }
    for(int i = n ; i > 0 ; i--)
    {
        for(int j = 1 ; j <= m ; j++)
        {
            if(inside(i , j - 1) && inside(i + 1 , j)) a[i][j] += min(a[i][j - 1] , a[i + 1][j]);
            else if(inside(i , j - 1)) a[i][j] += a[i][j - 1];
            else if(inside(i + 1 , j)) a[i][j] += a[i + 1][j];
        }
    }
    cout << sum - a[1][m] << '\n';
}