// Două numere a
//  și b
//  sunt numite generatoare ale unui număr natural n
//  dacă a⋅b+[a/b]=n
//  unde s-a notat cu [c]
//  partea întreagă a numărului real c
// .

// Subprogramul generatoare are un singur parametru, n
// , prin care primește un număr natural (n∈[2,109])
// . Subprogramul afișează pe ecran toate perechile distincte de numere naturale cu proprietatea că sunt generatoare ale lui n
//  și că primul număr din pereche este par. Numerele din fiecare pereche sunt separate prin simbolul minus (-), iar perechile
//   sunt separate prin câte un spațiu. Dacă nu există astfel de perechi, se afișează pe ecran mesajul nu exista.
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, a = 2, b = 0;
    bool bomba = false;
    cin >> n;
    while (a * a <= n)
    {
        if (n % a == 0 && a != n / a)
        {
            cout << a << "-" << n / a << " ";
            bomba = true;
        }
        a += 2;
    }

    b = a;
    while (b > 0)
    {
        while (a * b + a / b < n)
            a += 2;
        if (a * b + a / b == n)
        {
            cout << a << "-" << b << " ";
            bomba = 1;
        }
        b--;
    }
    if (!bomba)
        cout << "nu exista";
    return 0;
}
