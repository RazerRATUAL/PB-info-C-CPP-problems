#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= 2 * n; ++i)
    {
        for (int j = 1; j <= 2 * n; ++j)
            if (i <= n && j <= i)
                cout << "*";
            else
            {
                if (i > n && j >= i)
                    cout << "*";
                else
                    cout << " ";
            }
     cout << '\n';
    }

    return 0;
}
