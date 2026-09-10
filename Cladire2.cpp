#include <fstream>

using namespace std;
ifstream cin("cladire2.in");
ofstream cout("cladire2.out");
int n , m , a[201][201] , cnt , s[201][201];
struct poz
{
    int i , j;
}rez[401];
int main()
{
    cin >> n >> m;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            cin >> a[i][j];
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= m ; j++)
            s[i][j] = a[i][j] + max(s[i - 1][j] , s[i][j - 1]);
    cout << s[n][m] << '\n';
    int i = n , j = m;
    while(s[i][j] - a[i][j] != 0)
    {
        rez[cnt].i = i, rez[cnt].j = j;
        cnt++;
        if(s[i][j - 1] == s[i][j] - a[i][j]) j--;
        else i--;
    }
    cout << "1 1" << '\n';
    for(int i = cnt - 1 ; i >= 0 ; i--)
        cout << rez[i].i << " " << rez[i].j << '\n';
    return 0;
}