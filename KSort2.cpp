#include <iostream>
using namespace std;

const int Dim = 200001;
int elem[Dim];
int n, k, tmp[Dim];

void CitesteSir();
void Cresc(int st, int dr);
void Desc(int st, int dr);
void InterclaseazaCresc(int st, int dr);
void InterclaseazaDesc(int st, int dr);
void AfiseazaSir();

int main()
{
    CitesteSir();
    Cresc(1, k);
    Desc(k + 1, n);
    AfiseazaSir();

    return 0;
}

void CitesteSir()
{
    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
        cin >> elem[i];
}

void Cresc(int st, int dr)
{
    if (st == dr)
        return;

    int m = (st + dr) / 2;

    Cresc(st, m);
    Cresc(m + 1, dr);

    InterclaseazaCresc(st, dr);
}

void Desc(int st, int dr)
{
    if (st == dr)
        return;

    int m = (st + dr) / 2;

    Desc(st, m);
    Desc(m + 1, dr);

    InterclaseazaDesc(st, dr);
}

void InterclaseazaCresc(int st, int dr)
{
    int m = (st + dr) / 2;
    int i = st, j = m + 1, k = 0;

    while (i <= m && j <= dr)
    {
        if (elem[i] < elem[j])
            tmp[k++] = elem[i++];

        else
            tmp[k++] = elem[j++];
    }

    while (i <= m)
        tmp[k++] = elem[i++];

    while (j <= dr)
        tmp[k++] = elem[j++];

    for (int i = st; i <= dr; ++i)
        elem[i] = tmp[i - st];
}

void InterclaseazaDesc(int st, int dr)
{
    int m = (st + dr) / 2;
    int i = st, j = m + 1, k = 0;

    while (i <= m && j <= dr)
    {
        if (elem[i] > elem[j])
            tmp[k++] = elem[i++];

        else
            tmp[k++] = elem[j++];
    }

    while (i <= m)
        tmp[k++] = elem[i++];

    while (j <= dr)
        tmp[k++] = elem[j++];

    for (int i = st; i <= dr; ++i)
        elem[i] = tmp[i - st];
}

void AfiseazaSir()
{
    for (int i = 1; i <= n; ++i)
        cout << elem[i] << ' ';
}