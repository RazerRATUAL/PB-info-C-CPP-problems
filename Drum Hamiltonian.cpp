#include <fstream>

using namespace std;

ifstream cin("drum_hamiltonian.in");
ofstream cout("drum_hamiltonian.out");

int n , a[101][101] , ok , x[101] , x1 , y , p[101] , rez[101];
void afisare()
{
    for(int i = 1 ; i <= n ; i++)
        rez[i] = x[i];
    ok = 1;
}
void back(int k)
{
    for(int i = 1 ; i <= n && !ok; i++)
    if(!p[i])
    {
        x[k] = i;
        p[i] = 1;
        if(k == 1 || a[x[k - 1]][x[k]] == 1)
        {
            if(k == n) afisare();
            else back(k + 1);
        }
        p[i] = 0;
    }
}
int main()
{
    cin >> n;
    while(cin >> x1 >> y) a[x1][y] = 1;
    back(1);
    if(ok == 1)
    {
        cout << 1 << '\n';
        for(int i = 1 ; i <= n ; i++)
            cout << rez[i] << " ";
    }
    else cout << 0;
}