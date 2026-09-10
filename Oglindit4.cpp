#include <iostream>
using namespace std;

int main()
{
    int n, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        int x;
        cin >> x;
        int cx = x, ogl = 0;
        while(x)
        {
            ogl = ogl * 10 + x % 10;
            x/=10;
        }
        int a = ogl, b = cx;
        while(b)
        {
            int r = a % b;
            a = b;
            b = r;
        }
        if(a == 1)
            cnt++;
    }
    cout << cnt;
    return 0;
}
