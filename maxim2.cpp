#include <fstream>
#include <iostream>
using namespace std;

ifstream fin ("maxim.in");
ofstream fout ("maxim.out");

int main()
{
    int x, y;
    fin >> x >> y;
    if (x < y)
        fout << y;
    else
        fout << x;

    return 0;
}
