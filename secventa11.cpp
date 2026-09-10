#include <iostream>
using namespace std;

void CitesteSir();
void Secventa();

const int Dim = 300001;
int a[Dim];
bool sc1[Dim];

int n, cnt, cnt_final;

int main()
{
    CitesteSir();
    Secventa();

    for (int i = 1; i <= n; ++i)
    {
        if (sc1[i])
            ++cnt;

        else
            cnt = 0;


        if (cnt > cnt_final)
        {
            cnt_final = cnt;
        }
    }

    cout << cnt_final;

    return 0;
}

void CitesteSir()
{
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];
}

void Secventa()
{
    int i = 1;

    for (int i = 1; i <= n; ++i)
        sc1[i] = true;

    while (true)
    {
        while (a[i])
        {
            if (a[i] % 2 == 0)
            {
                sc1[i] = false;
                break;
            }

            a[i] /= 2;

        }

        ++i;

        if (i > n)
            break;
    }
}
