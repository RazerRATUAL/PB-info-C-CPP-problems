#include <iostream>
using namespace std;
const int dim = 202;
int a[dim][dim];
int main()
{
    int n, nord = 0, sud = 0, vest = 0, est = 0 , p;
    cin >> n >> p;
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= n ; j++)
        cin >> a[i][j];
    for(int i = 1 ; i <= n ; i++)
        for(int j = 1 ; j <= n ; j++)
        {
            if(i < j && i + j < n + 1) nord += a[i][j];
            else if(i < j && i + j > n + 1)  est += a[i][j];
            else if(i > j && i + j < n + 1) vest += a[i][j];
            else if(i > j && i + j > n + 1) sud += a[i][j];
        }
    if(p == 1) cout << nord;
    if(p == 2) cout << est;
    if(p == 3) cout << sud;
    if(p == 4) cout << vest;
    return 0;

}