#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    char c, d;
    cin >> n >> c >> d;

    for (int x = 1; x <= n; ++x)
    {
        for(int y = 1; y <= n; ++y)
        {
            if (x % 2 == 0 && y % 2 == 0)
                cout << c;

            else if (x % 2 != 0 && y % 2 != 0)
                cout << c;

            else if (x % 2 == 0 && y % 2 != 0)
                cout << d;

            else if (x % 2 != 0 && y % 2 == 0)
                cout << d;
        }

        cout << '\n';


    }


    return 0;
}






