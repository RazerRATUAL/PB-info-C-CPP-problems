#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1001];
    int ok = 0;
    for(int i = 0 ; i < n ; ++i)
    cin >> a[i];
    for(int i = 0 ; i < n ; ++i)
    {
        ok=0;
        for(int j = i+1 ; j < n ; ++j)
        {
            if(a[i]<a[j])
            {
            cout << a[j] << ' ';
            ok++;
            break;
            }
        }
        if(ok==0)
            cout << -1 << ' ';
    }
}
