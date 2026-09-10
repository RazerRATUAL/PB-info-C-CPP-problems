#include <iostream>

using namespace std;
double a[51][51];
int main()
{
    int n;
    cin >> n;
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= n ; ++j)
            cin >> a[i][j];
    double v[51];
    for(int i = 1 ; i <= n ; ++i)
        for(int j = 1 ; j <= n ; ++j)
            v[j] += (a[i][j] * 100000);
    for(int i = 1 ; i <= n ; ++i)
        v[i] /= (n * 100000);
    for(int i = 1 ; i <= n/2 ; ++i)
    {
        for(int j = 1 ; j <= n ; ++j)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    for(int i = 1 ; i <= n ; ++i)
        cout << v[i] << ' ';
    cout << endl;
    for(int i = n/2 + 1 ; i <= n ; ++i)
    {
        for(int j = 1 ; j <= n ; ++j)
            cout << a[i][j] << ' ';
        cout << endl;
    }
    return 0;
}
