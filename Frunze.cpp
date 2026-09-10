#include <fstream>
#include <vector>

using namespace std;
ifstream cin("frunze.in");
ofstream cout("frunze.out");
vector <int> G[101];
int n , x , k , rez[101] , p , cnt;
int main()
{
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> x;
        if(x != 0) G[x].push_back(i);
        if(x == 0) p = i;
    }
    cout << p << '\n';
    for(int i = 1 ; i <= n ; i++)
    {
        int ok = 0;
        for(auto j:G[i])
            ok++;
        if(ok == 0)
            cnt++ , rez[cnt] = i;
    }
    cout << cnt << '\n';
    for(int i = 1 ; i <= cnt ; i++)
        cout << rez[i] << " ";
}