#include <iostream>
using namespace std;
const int dim = 25001;
const int Dim = 200001;

int a[dim], y[Dim];
long long n, m, x;
bool BS(long long x);
int main(){
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        cin >> y[i];
        if(BS(y[i]) == true)
            cout << 1 << ' ';
        else
            cout << 0 << ' ';

    }
    return 0;
}

bool BS(long long x)
{
    if (x < a[1] || x > a[n])
        return false;

    int st = 1, dr = n, mij;

    while (st <= dr)
    {
        mij = (dr + st) / 2;
        if(x == a[mij])
            return true;

        if(x < a[mij])
            dr = mij - 1;
        else
            if(x > a[mij])
                st = mij + 1;
    }
    return false;
}