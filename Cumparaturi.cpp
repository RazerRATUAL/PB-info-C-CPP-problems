#include <iostream>
using namespace std;

int main()
{
    int B, S, C, P;
    cin >> B >> S;
    C = S / B;
    P = B - S % B;
    cout << C << " " << P;

    return 0;
}
