#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    int n;
    cin >> n;
    int cnt=0;

    long long sumaDiv = 0;
    for (int d = 1; d * d <= n; ++d)
        if (n % d == 0)
        {
            cnt++;
            sumaDiv += d;
            if (d * d != n)
                {sumaDiv += n / d;
                cnt++;}
        }
    cout << fixed << setprecision(2)<< (float)sumaDiv/cnt;
    return 0;
}
