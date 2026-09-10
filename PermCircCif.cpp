#include <iostream>
using namespace std;

void perm (int& n);

int main()
{
    int n;
    cin >> n;

    perm(n);

    cout << n;
    return 0;
}
void perm (int& n)
{
    int p = 1;
    int nr = 0;
    while (n > 9)
    {
        nr += (n % 10) * p;
        p *= 10;
        n /= 10;
    }
    nr = nr * 10 + n;
    n = nr;
}

