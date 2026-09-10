#include <fstream>

using namespace std;

ifstream cin ("combinari.in");
ofstream cout ("combinari.out");

int n, p, x[16];

void afisare()
{
    for (int i = 1; i <= p; ++i) 
    cout <<x[i] <<" ";
    cout <<"\n";
}

void bectreching (int pas)
{
    for (int i = x[pas - 1] + 1; i <= n - p + pas; ++i)
    {
        x[pas] = i;
        if (pas < p)
        bectreching(pas+1);
        else afisare();
    }
}

int main ()
{
    cin>>n>>p;
    bectreching(1);

    return 0;
}