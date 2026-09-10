#include <iostream>
using namespace std;

int main()
{
    int n;
    int a, b;
    int dif_max = 0;
    int cnt = 0;
    int dif;
    cin >> n;
    cin >> a;

    for (int i = 2; i <= n; i++)
    {
        cin >> b;
        dif = abs(a - b);

        if (dif > dif_max)
        {
            dif_max = dif;
            cnt = 1;
        }

        else if (dif == dif_max)
        {
            dif_max = dif;
            cnt++;
        }
        a = b;
    }
    cout << dif_max << ' ' << cnt;
    return 0;
}
