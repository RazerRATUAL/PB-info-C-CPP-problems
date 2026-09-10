#include <fstream>
using namespace std;
ifstream cin("spirala.in");
ofstream cout("spirala.out");
int n , i , j , k , a[31][31];
int main()
{
    cin >> n;
    for(i = 1 ; i <= n ; ++i)
        for(j = 1 ; j <= n ; ++j)
        cin >> a[i][j];
    if(n % 2 == 0) k = n / 2;
    else k = n / 2 + 1;
    for(i = 1 ; i <= k ; ++i)
    {
        for(j = i ; j <= n - i + 1 ; ++j) cout << a[i][j] << " ";
        for(j = i + 1 ; j <= n - i + 1 ; ++j) cout << a[j][n - i + 1] << " ";
        for(j = n - i ; j >= i ; j--) cout << a[n - i + 1][j]<< " ";
        for(j = n - i ; j >= i + 1 ; j--) cout << a[j][i] << " ";
    }
    return 0;
}