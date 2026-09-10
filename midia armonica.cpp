#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double suma = 0;
    int n;
    int x;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
         suma +=1. / x;
    }
    cout << fixed << setprecision (2)
         << n / suma;

    return 0;
}

