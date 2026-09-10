#include <fstream>

using namespace std;
ifstream cin("componenteconexe1.in");
ofstream cout("componenteconexe1.out");
int n , m , x , y , a[101][101] , v[101] , nrc;
void dfs(int x , int val)
{
    v[x] = val;
    for(int i = 1 ; i <= n ; i++)
        if(!v[i] && a[x][i] == 1) dfs(i , val) , v[i] = val;
}
int main()
{
    cin >> n;
    while(cin >> x >> y) a[x][y] = a[y][x] = 1 , m++;
    for(int i = 1 ; i <= n ; i++)
        if(v[i] == 0) dfs(i , nrc + 1) , nrc++;
    cout << nrc - 1 << '\n';
    for(int i = 2 ; i <= nrc; i++)
    {
        int rez = 0;
        for(int j = 1 ; j <= n && rez == 0; j++)
            if(i == v[j]) rez = j;
        cout << 1 << " " << rez << " ";
    }
}