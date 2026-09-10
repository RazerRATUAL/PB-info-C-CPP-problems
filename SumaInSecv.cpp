#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("sumainsecv.in");
ofstream fout("sumainsecv.out");

const int Dim = 101;
int a[Dim], n, S;

int main(){
    fin >> n >> S;
    int suma = 0;
    int st = 0, dr = 0;
    int j = 1;

    for (int i = 1; i <= n; ++i){
        fin >> a[i];
        suma += a[i];

        while (suma > S)
            suma -= a[j++];

        if (suma == S)
        {
            st = j;
            dr = i;
            break;
        }
    }

    fout << st << ' ' << dr;

    return 0;
}