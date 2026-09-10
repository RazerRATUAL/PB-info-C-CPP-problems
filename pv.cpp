#include <iostream>
using namespace std;
int n , a[101] , s , cnt;
int main()
{
    cin >> n;
    for(int i = 1 ; i <= n ; ++i)
        cin >> a[i];
    for(int i = n ; i >= 1 ; --i)
     cout << a[i] << ' ';
     cout << '\n';
    for(int i = 1 ; i <= n ; ++i)
        if(a[i] % 2 == 0) s += a[i];
            cout << s << '\n';
            s = 0;
    for(int i = 2 ; i <= n ; i += 2) s += a[i];
        cout << s << '\n';
    for(int i = 1 ; i <= n ; ++i)
        if(a[i] % 10 == 0) cnt++;
            cout << cnt << '\n';
            s = 0;
    for(int i = 1 ; i <= n ; i+=2)
        if(a[i] % 3 == 0)
            s += a[i];
            cout << s;
    return 0;
}
