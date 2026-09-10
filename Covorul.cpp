#include <iostream>
using namespace std;

int main()
{
    int a , b;
    cin >> a >> b;
    cout << min(a , b) << ' ';
    int cnt = 0;
    while(a != 0 && b != 0)
    {
        if(a > b)
        {
            int x = a / b;
            a -= (x * b);
            cnt += x;
        }
        else
        {
            int x = b / a;
            b -= (x * a);
            cnt += x;
        }
    }
    cout << cnt;
    return 0;
}
