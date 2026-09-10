#include <iostream>
using namespace std;

void zero(int n, int v[]);
int const Dim = 101;

int z[101];

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= 2 * n; ++i)
        cin >> z[i];

    zero(n, z);

    for(int i = 1; i <= 2 * n; ++i)
        cout << z[i] << ' ';
}

void zero(int n, int v[])
{
    int par[53], imp[53], poz_p = 0, poz_i = 0;
    
    for (int i = 1; i <= 2 * n; ++i)
    {
        if (v[i] % 2 == 0)
            par[++poz_p] = v[i];
            
        else
            imp[++poz_i] = v[i];
    }
    
    poz_p = 1;
    poz_i = 1;
    
    for (int i = 1; i <= 2 * n; ++i)
    {
        if (i % 2 == 0)
        {
            v[i] = par[poz_p];
            ++poz_p;
        }
        
        else
        {
            v[i] = imp[poz_i];
            ++poz_i;
        }
    }
    
}