#include <iostream>
using namespace std;

const int Dim = 52;
int a[Dim];

int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = 1; i <= n; ++i)
    {
        if (a[i] % 2 == 0)
        {
            for (int j = n; j >= i + 1; --j)
                a[j + 1] = a[j];
            ++n;
            a[i + 1] = 2 * a[i];
            ++i;
        }
    }

    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';


    return 0;
}
