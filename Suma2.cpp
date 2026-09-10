#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1001];
    int suma = 0;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    int pin = -1;
    int pfin = -1;

    for (int i = 1; i <= n; ++i)
        if (a[i] % 2 == 0)
        {
            pin = i;
            break;
        }
    for (int i = n; i >= 1; --i)
        if (a[i] % 2 ==0)
        {
            pfin = i;
            break;
        }
    if (pin == -1 && pfin == -1)
        cout << "NU EXISTA";
    else
    {
        for( int i = pin; i <= pfin; ++i)
            suma = suma +a[i];
        cout << suma;
    }
    return 0;
}
