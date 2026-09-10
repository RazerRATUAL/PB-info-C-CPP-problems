#include <iostream>
using namespace std;

int main()
{
    int n, a[201], x, sum = 0, cate = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1;i <= n; i++)
        {
            if(a[i] != 0)
            {
                sum = sum + a[i];
                cate++;
            }
        }
    int med = sum / cate;
     for(int i = 1; i<=n; i++)
    {
       if(a[i] == 0)
       cout << med << " ";
       else cout << a[i] << " ";
    }
     return 0;
}
