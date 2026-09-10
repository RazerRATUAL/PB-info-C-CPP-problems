#include <iostream>
using namespace std;
int prim(int n)
{
    if(n == 0 || n == 1) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    for(int i = 3;i * i <= n;i = i + 2)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}
int main()
{
    int n, m, cate = 0;;
    int a[102][102];
    cin >> n >> m;
    for(int i = 1;i <= n; ++i)
       for(int j = 1;j <= m; ++j)
        {
            cin >> a[i][j];

        }
     for(int i = 2;i <= n;i = i + 2)
            for(int j = 1;j <= m; ++j)
     {
         if(prim(a[i][j])) cate++;
     }

    cout << cate;
    return 0;
}
