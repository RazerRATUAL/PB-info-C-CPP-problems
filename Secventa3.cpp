#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

ifstream fin("secventa3.in");
ofstream fout("secventa3.out");

int main(){
    int n, x, l = 1, lmax = 0, poz = 0, ant;
    fin >> n >> ant;

    for (int i = 2; i <= n; ++i){
        fin >> x;

        if ((x + ant) % 2 == 1)
            l++;
        else{
            if (l >= lmax)
            {
                lmax = l;
                poz = i - 1;
            }
            l = 1;
        }

        ant = x;
    }

    if (l > lmax){
        lmax = l;
        poz = n;
    }

    fout << poz - lmax + 1 << ' ' << poz;

    return 0;
}