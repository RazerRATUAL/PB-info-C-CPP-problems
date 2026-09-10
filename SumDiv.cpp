#include <iostream>

using namespace std;

int main()
{
    int n, c = 0, x, s = 0, p;
    cin >> n >> p;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        for(int d = 1; d * d <= x; d++)
        {
            if(x % d == 0)
            {
               if(x / d == d)
                c++;
               if(x / d != d)
                c = c + 2;
            }
        }
        if(c >= p)
            s += x;
        c = 0;
    }
    cout << s;
    return 0;
}
