// Cerința
// Numim secvență neuniformă a unui șir de numere naturale un subșir al acestuia, format din termeni aflați pe poziții consecutive în șirul dat, cu proprietatea că oricare trei termeni aflați pe poziții consecutive sunt diferiți. Lungimea secvenței este egală cu numărul de termeni ai acesteia.

// Se dă un șir de cel mult 106 numere naturale din intervalul [0,9], în care există cel puțin trei termeni diferiți pe poziții consecutive. Se cere să se afișeze lungimea maximă a unei secvențe neuniforme a șirului dat.

// Date de intrare
// Fișierul de intrare secventeneuniforme.in conține un șir de cel mult 106 numere naturale din intervalul [0,9] separate prin spații.

// Date de ieșire
// Fișierul de ieșire secventeneuniforme.out va conține pe prima linie lungimea maximă a unei secvențe neuniforme a șirului aflat în fișierul de intrare.

// Restricții și precizări
// proiectați un algoritm eficient din punctul de vedere al timpului de executare și al memoriei utilizate;
// se recomandă o soluție care să nu folosească tablouri sau alte structuri de date similare.
// Exemplu:
// secventeneuniforme.in

// 7 7 1 3 7 7 5 3 3 3 7 8 9
// secventeneuniforme.out

// 4
// Explicație
// Lungimea maximă a unei secvențe neuniforme este 4. Sunt două secvențe neuniforme de lungime maximă: 7 1 3 7 și 3 7 8 9.
#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("secventeneuniforme.in");
ofstream fout("secventeneuniforme.out");
int main()
{
    int x, y, z, lmax = 2, l = 2;
    fin >> x >> y;

    while (fin >> z)
    {
        if (x != y && y != z && x != z)
            l++;
        else
            l = 2;
        if (l > lmax)
            lmax = l;
        x = y;
        y = z;
    }
    fout << lmax;
    return 0;
}