#include <iostream>
#include <algorithm>
using namespace std;

const int Dim = 100000;
int a[Dim], n;

void CitesteSir();
void ScrieSir();
void Quick(int st, int dr); 

int main()
{
    CitesteSir();
    Quick(1, n);
    ScrieSir();

    return 0;
}

void Quick(int st, int dr)
{
    if (st >= dr) return;

    int pivot = a[(st + dr) / 2];
    int i = st, j = dr;

    while (i <= j)
    {
        while (a[i] < pivot) i++;
        while (a[j] > pivot) j--;

        if (i <= j)
        {
            swap(a[i], a[j]);
            i++; j--;
        }
    }

    Quick(st, j);
    Quick(i, dr);
}

void ScrieSir()
{
    for (int i = 1; i <= n; ++i)
        cout << a[i] << ' ';
}

void CitesteSir()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}


