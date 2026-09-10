#include <iostream>
using namespace std;

void P(int v[], int n, int& s);
bool Prim(int n);

int v[100];
int main()
{
    int n;
    int s;
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> v[i];

        P(v, n, s);
    cout << s;
}
int s;
void P(int v[], int n, int& s)
{
    if(n == 0)
    {
        s = 0;
        return;
    }


    P(v, n - 1, s);

    if (Prim(v[n]))
        s += v[n];
}

bool Prim(int n)
{
    if (n < 2)
        return false;

    if (n == 2)
        return true;

    if (n != 2 && n % 2 == 0)
        return false;

    for (int d = 3; d * d <= n; d += 2)
    {
        if (n % d == 0)
            return false;


    }

     return true;
}
