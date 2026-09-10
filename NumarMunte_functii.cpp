#include <iostream>

using namespace std;
void Citire(int a[], int& n)
{
    cin >> n;
    for( int i = 1; i <= n; ++i)
        cin >> a[i];
}
void Cifre( int nr, int y[], int& ind)
{
    ind = 0;
    while( nr)
    {
        y[++ind] = nr %10;
        nr /= 10;
    }
}
int Maxim( int y[], int n)
{
    int cmax = -1, poz;
    for( int i = 1; i <= n; ++i)
        if( cmax < y[i])
        {
            cmax = y[i];
            poz = i;
        }
    return poz;
}
int Munte ( int  nr)
{
    int y[11], ind = 0, pmax;
    Cifre( nr, y, ind);
    pmax = Maxim(y, ind);
    if( pmax == 1 || pmax == ind)
        return 0;
    for( int i = 2; i <= pmax; ++i)
        if( y[i - 1] >= y[i]) return 0;
    for( int i = pmax; i < ind; ++i)
        if( y[i] <= y[i + 1]) return 0;
    return 1;

}
void Afisare(int x)
{
    cout << x << "\n";
}
void Parcurgere(int a[], int n)
{
    for( int i = 1; i <= n; ++i)
        Afisare( Munte ( a[i])); /// cout << Munte( a[i]) << "\n";
}
int main()
{
    int a[100], n;

    Citire( a, n);
    Parcurgere(a, n);
}
