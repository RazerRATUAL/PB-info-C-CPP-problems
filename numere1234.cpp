#include<iostream>
using namespace std;

int n, m;
int x[11], f[5];

void afis();
void back(int k);

int main()
{
    cin >> n;
    m = n * (n + 1) / 2;
    back(1);

    return 0;
}

void afis()
{
    for(int i = 1; i <= m; i++)
        cout << x[i];
    cout << '\n';
}

void back(int poz)
{
    if(poz > m)
    {
        afis();
        return;
    }

    for(int i = 1; i <= n; ++i)
    {
        x[poz] = i;
        ++f[i];
        if(f[i] <= i) back(poz + 1);
        --f[i];
    }
}