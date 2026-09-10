#include <iostream>
using namespace std;

int main()
{
    int S = 0;
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        S+= i * (i + 1);

    cout << "Rezultatul este " << S;

    return 0;
}

