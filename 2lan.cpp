#include <fstream>
#include <iostream>
#include <cmath>
using namespace std;

ifstream fin ("2lan.in");
ofstream fout ("2lan.out");

int main()
{
    int n;
    fin >> n;
    if (n == 0){
        fout << 1;
        return 0;
	}
    if (n % 4 == 0)
        fout << 6;
    else if (n % 4 == 1)
        fout << 2;
    else if (n % 4 == 2)
        fout << 4;
    else
        fout << 8;

    return 0;
}



