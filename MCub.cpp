#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("mcub.in");
ofstream fout("mcub.out");

long long n , h , hmax , rez;

int main()
{
    fin >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        hmax = h;
        fin >> h;
        if(h > hmax)
            rez += h - hmax;
    }
    fout << rez;
    return 0;
}
