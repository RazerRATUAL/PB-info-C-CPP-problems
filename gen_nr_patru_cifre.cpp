#include <iostream>
using namespace std;

int main()
{
    int c1, c2;
    cin >> c1 >> c2;

    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;

    for (a = c1; a <= 9; ++a)
    {
        for (b = 0; b <= 8; b += 2)
        {
             d = b;
             for (c = 0; c <= c2; ++c)
                cout << 1000 * a + 100 * b + 10 * c + d << '\n';
        }
    }
    return 0;
}
