#include <iostream>
using namespace std;
int mp(int n);

int main()
{
    int n;
    cin >> n;
    cout << mp(n);
}

int mp(int n)
{
    if(n >= 12)
        return n - 1;
    else
        mp(mp(n + 2));
}
