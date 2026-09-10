#include <iostream>
using namespace std;

int main()
{
    int d, r, m, S;
    cin >> S >> d >> r >> m;
    if ( S >= m && S < r && S < d )
        cout << "masina";
    if ( S > m && S >= r && S < d )
        cout << "robot";
    if ( S > m && S > r && S >= d )
        cout << "drona";
    if ( S < m && S < r && S < d )
        cout << "nimic";
    return 0;
}

