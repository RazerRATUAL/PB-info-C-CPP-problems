#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("conversie_b_10.in");
ofstream fout("conversie_b_10.out");
int main()
{
    int n , b;
    fin >> n >> b;
    int nr = 1;
    int a[10];
    int p = 0;
    while(n)
    {
        a[p] = n % 10;
        n /= 10;
        p++;
    }
    nr=a[p-1];
    for(int i = p-2 ; i >= 0 ; --i)
    {
        nr=nr*b+a[i];
    }
    fout << nr;
    return 0;
}
