#include <fstream>
#include <vector>
using namespace std;

ifstream cin("subarbore2.in");
ofstream cout("subarbore2.out");

int n , k , t[101] , val[101] , s;

int main()
{
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i++)
        cin >> t[i];
    for(int i = 1 ; i <= n ; i++)
        cin >> val[i];
    s += val[k];
    for(int i = 1 ; i <= n ; i++)
    {
        int ok = 0;
        int p = t[i];
        while(p)
        {
            if(p == k)ok = 1;
            p = t[p];
        }
        if(ok) s += val[i];
    }
    cout << s;
    return 0;

}