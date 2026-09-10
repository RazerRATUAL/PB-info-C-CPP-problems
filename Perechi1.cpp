#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int x, y;
    int difmin = 1e9;
    int ord = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        int dif;
        if (x > y)
            dif = x - y;
        else
            dif = y - x;
        if (dif <= difmin)
            {
                difmin = dif;
                ord = i;
            }

    }
    cout << ord;
    return 0;
}
