#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char c, d;
    cin >> c >> d;
    for (int i = 1; i <= n; ++i)
    {
     for (int j = 1; j <= n; ++j)
        if (i == 1 || i == n)
            cout << c;
        else
        {
            if (j == 1 || j == n)
                cout << c;
            else
                cout << d;
        }
      cout << '\n';
    }
    return 0;
}
