#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n, x, cp, pc, pc_min = 10, xmax = -1;

    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> x;
        cp = x;

        while(cp > 9)
            cp /= 10;

        pc = cp;

        if(pc < pc_min)
        {
            pc_min = pc;
            xmax = x;
        }
        else
            if(pc == pc_min && x > xmax)
                xmax = x;
    }
    cout << xmax;
    return 0;
}
