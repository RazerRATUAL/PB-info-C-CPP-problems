#include <fstream>
using namespace std;
ifstream fin("nrlipsa.in");
ofstream fout("nrlipsa.out");

bool apare[999 + 1];

int main()
{
    int x;
    while (fin >> x)
        if (100 <= x && x <= 999)
            apare[x] = true;

    int afisate = 0;
    for (x = 999; x >= 100 && afisate != 2; --x)
        if (!apare[x])
        {
            fout << x << ' ';
            afisate++;
        }

    if (afisate != 2)
        fout << "NU";
}