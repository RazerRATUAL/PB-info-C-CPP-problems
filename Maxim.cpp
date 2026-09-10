#include <iostream>
using namespace std;

int main()
{
    int n;
    int vmax =-1000001;
    cin >> n;
    if (n == 0)
        cout << "NU EXISTA";
    else if (n > 0)
        {
            vmax = n;
        while (n)
        {
        cin >> n;
        if (n > 0 && n > vmax)
        vmax = n;
        }
            cout << vmax;
        }
    return 0;
}
