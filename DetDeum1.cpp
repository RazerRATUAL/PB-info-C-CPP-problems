#include <fstream>
using namespace std;

ifstream cin("detdrum1.in");
ofstream cout("detdrum1.out");

int t[101], n, k , rez[101] , cnt;

int main()
{
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i++)
        cin >> t[i];
    while(k)
    {
        rez[++cnt] = k;
        k = t[k];
    }
    for(int i = cnt ; i >= 1 ; i--)
        cout << rez[i] << " ";
}