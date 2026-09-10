#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("crescator1.in");
ofstream fout("crescator1.out");

unsigned int x;
int main()
{
    unsigned int i = 0, a;
    bool exista = false;
    while (fin >> x && exista == false)
    {
        if (a == x)
        {
            i++;
        }
        else
        {
            if (i % 2 == 1)
                exista = true;
            else
                a = x, i = 1;
        }
    }
    if (!exista && i % 2 == 0)
        fout << "nu exista";
    else
        fout << a;

    fin.close();
    fout.close();

    return 0;
}