#include <iostream>
using namespace std;

struct Copil {
    int h, ord;
    bool operator < (Copil const& c) const noexcept
    {
        return h < c.h;
    }
};

const int Dim = 1001;
Copil c[Dim];
int n;
Copil tmp[Dim];


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
        if (c[i] < c[j])   // c[i].operator < (c[j])
            tmp[k++] = c[i++];
        else
            tmp[k++] = c[j++];

    while (i <= m)
        tmp[k++] = c[i++];

    while (j <= dr)
        tmp[k++] = c[j++];


    for (int i = st; i <= dr; ++i)
        c[i] = tmp[i - st];
}

void CitesteSir()
{
    cin >> n;
    int h;
    for (int i = 1; i <= n; ++i)
    {
        cin >> h;
        c[i] = {h, i};
    }
}

void ScrieSir()
{
    for (int i = 1; i <= n; ++i)
        cout << c[i].ord << ' ';
}