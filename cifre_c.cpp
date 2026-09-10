#include <iostream>
#include <algorithm>
using namespace std;

int n , m , x[30] , cnt , p[30] , c , a[30];

int afisare()
{
    for(int i = 1 ; i <= c ; i++)
        cout << a[x[i]];
    cout << '\n';
}

void back(int poz)
{
    for(int i = cnt; i >= x[poz - 1] + 1 ; i--)
    {
        x[poz] = i;
        if(poz == 1 && a[i] == 0);
        else
        {
            if(poz == c) afisare();
            else back(poz + 1);
        }
    }
}

int main()
{
    cin >> n >> c;
    while(n != 0)
    {
        a[++cnt] = n % 10;
        n /= 10;
    }
    sort(a + 1 , a + cnt + 1);

    back(1);
}