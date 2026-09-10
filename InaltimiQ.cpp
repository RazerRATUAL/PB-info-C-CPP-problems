#include <iostream>
using namespace std;

const int Dim = 1001;
int h[Dim], n;
int ord[Dim];

int tmp1[Dim]; // inaltimi
int tmp2[Dim]; // nr de ordine

void CitesteSir();
void ScrieSir();
void Merge(int st, int dr);
void Interclaseaza(int st, int dr);

int main()
{
    CitesteSir();
    Merge(1, n);
    ScrieSir();
}

void Merge(int st, int dr)
{
    if (st == dr) return;
    int m = (st + dr) / 2;

    Merge(st, m);
    Merge(m + 1, dr);
    Interclaseaza(st, dr);
}

void Interclaseaza(int st, int dr)
{
    int m = (st + dr) / 2;
    int i = st, j = m + 1, k = 0;
    while (i <= m && j <= dr)
        if (h[i] < h[j])
        {
            tmp1[k] = h[i];
            tmp2[k++] = ord[i++];
        }
        else
        {
            tmp1[k] = h[j];
            tmp2[k++] = ord[j++];
        }

    while (i <= m)
    {
        tmp1[k] = h[i];
        tmp2[k++] = ord[i++];
    }

    while (j <= dr)
    {
        tmp1[k] = h[j];
        tmp2[k++] = ord[j++];
    }


    for (int i = st; i <= dr; ++i)
    {
        h[i] = tmp1[i - st];
        ord[i] = tmp2[i - st];
    }
}

void CitesteSir()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> h[i];
        ord[i] = i;
    }
}

void ScrieSir()
{
    for (int i = 1; i <= n; ++i)
        cout << ord[i] << ' ';
}