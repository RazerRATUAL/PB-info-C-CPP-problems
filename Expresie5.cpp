#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long S = 0;
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        S+= 1LL * pow(i,i);

    cout << "Rezultatul este " << S;

    return 0;
}


