#include <fstream>
using namespace std;
ifstream in("numere25.in");
ofstream out("numere25.out");

int main()
{
    int n, x, k = 1;
    bool gasit = false;
    in >> n;
    while (in >> x)
    {
        while (k < x)
            out << k++ << ' ', gasit = true;
        if (k == x)
            k++;
    }
    while (k <= n)
        out << k++ << ' ', gasit = true;
    if (!gasit)
        out << "Nu exista";
    return 0;
}