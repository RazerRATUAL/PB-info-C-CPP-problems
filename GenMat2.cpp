// Cerinţa
// Scrieţi un program care citeşte de la tastatură un număr natural n şi construieşte în memorie o matrice cu n linii şi n coloane ale cărei elemente vor primi valori după cum urmează:

// elementele aflate pe diagonala principală a matricei vor primi valoarea 0
// elementele de pe prima coloană, cu excepţia celui aflat pe diagonala principală vor primi valoarea n
// elementele de pe a doua coloană, cu excepţia celui aflat pe diagonala principală vor primi valoarea n-1
// …
// elementele de pe ultima coloană, cu excepţia celui aflat pe diagonala principală vor primi valoarea 1
// Date de intrare
// Programul citește de la tastatură numărul n.

// Date de ieşire
// Programul afișează pe ecran matricea construită, câte o linie a matricei pe câte o linie a ecranului, elementele fiecărei linii fiind separate prin câte un spaţiu.

// Restricţii şi precizări
// 2≤n≤24
#include <iostream>
using namespace std;

const int Dim = 21;
int a[25][25];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
        {
            a[i][j] = n - j + 1;
        }

    for (int i = 1; i <= n; ++i)
        a[i][i] = 0;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
            cout << a[i][j] << " ";
        cout << '\n';
    }

    return 0;
}