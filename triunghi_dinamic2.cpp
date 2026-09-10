#include <iostream>
using namespace std;

int n, a[101][101], s[101][101];
int MaxS = 0;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= i; ++j)
        cin >> a[i][j];

        //  s[1][1] = a[1][1];
        for(int i = 2; i <= n; ++i)
            {
                for(int j = 1; j <= i; ++j)
                {
                    a[i][j] = a[i][j] + max(a[i - 1][j - 1], a[i - 1][j]);
                    MaxS = max(a[i][j], MaxS);
                }
            }
    cout << MaxS;
}



