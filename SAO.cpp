#include <iostream>
using namespace std;

int main()
{
    int n , m;
    long long int sx = 0 , sy = 0;
    cin >> n;
    long long int x , y;
    for(int i = 1 ; i <= n ; ++i)
        cin >> x >> y , sx+=x , sy+=y;
    cin >> m;
    long long int min = 1000000000000001;
    bool ok = false;
    for(int i = 1 ; i <= m ; ++i)
    {
        long long int cost;
        cin >> x >> y >> cost;
        if(x >= sx && y >= sx)
            if(cost < min)
                min = cost , ok = true;
    }
    if(ok)
        cout << min;
    else
        cout << -1;
    return 0;
}
