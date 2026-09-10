#include <fstream>
#include <vector>
using namespace std;

ifstream cin("subarbore1.in");
ofstream cout("subarbore1.out");

int n , k , t[101];

int main()
{
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i++)
        cin >> t[i];

    for(int i = 1 ; i <= n ; i++)
    {
        int ok = 0;
        for(int j = 1 ; j <= n ; j++)
            if(t[j] == i) ok++;
        if(ok == 0)
        {
            int p = t[i];
            while(p)
            {
                if(p == k)ok = 1;
                p = t[p];
            }
            if(ok) cout << i << " ";
        }
    }
    return 0;

}