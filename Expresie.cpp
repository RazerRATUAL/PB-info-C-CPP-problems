#include <iostream>
using namespace std;

int main()
{
    long long S = 1;
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        S*= + i;

    cout << "Rezultatul este " << S;

    return 0;
}


