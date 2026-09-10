#include <iostream>
using namespace std;

const int Dim = 1001;
int a[Dim];
int n, k, cnt;
int x1, x2, x;
bool este = false;

void CitesteSir();
void VerifSecventa();
void AfiseazaSir();

int main()
{
    CitesteSir();
    VerifSecventa();
    AfiseazaSir();

    return 0;
}

void CitesteSir()
{
    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

}

void VerifSecventa()
{
    x = n / k;
    bool verif = false;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= (n - i) / x; ++j)
        {
            if (a[i] == a[i + x * j])
            {
                cnt = 0;
                verif = true;
                for (int l = 1; l < x; ++l)
                {
                    if(a[i + l] != a[i + x * j + l])
                        break;

                    else
                        ++cnt;
                }

                if (cnt == x - 1)
                {
                    este = true;
                    x1 = i / x + 1;
                    x2 = (i + x * j) / x + 1;
                    i = n;
                    break;
                }
            }

            if (verif == false && j == (n - i) / x)
                i += (x - 1);
        }

    }

}

void AfiseazaSir()
{
    if (este)
        cout << x1 << ' ' << x2;

    else
        cout << "NU";
}
