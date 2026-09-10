#include <iostream>
using namespace std;

int a[1001][1001];
int di[]={-1, -1, 1, 1};
int dj[]={-1, 1, -1, 1};
int main()
{
    int n , s , cnt=0 , i , j , nr;
    cin >> n >> s;
    for(int h = 1; h <= s; h++)
    {
        cin >> i >> j >> nr;
        a[i][j] = 1;
        for(int k = 1; k <= nr; k++)
            for(int q = 0; q < 4; q++)
            {
                int i1 = i + k * di[q];
                int j1 = j + k * dj[q];
                if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n)
                    a[i1][j1] = 1;
            }
    }
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        if(a[i][j] == 1)
            cnt++;
    cout << n * n - cnt;
    return 0;
}