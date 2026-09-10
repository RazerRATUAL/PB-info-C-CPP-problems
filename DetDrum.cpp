#include <fstream>
using namespace std;

ifstream cin("detdrum.in");
ofstream cout("detdrum.out");

int t[101], n, k;

int main()
{
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i++)
        cin >> t[i];
    while(k)
    {
        cout << k << " ";
        k = t[k];
    }
}