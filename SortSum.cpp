#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;
ifstream fin("sortsum.in");
ofstream fout("sortsum.out");
const int dim = 1e7;
int a[dim/10+2], x, n, i;
int sum(int x)
{
    int s=0;
    while(x)
    {
        s+=x%10;
        x/=10;
    };
    return s;
}
int main()
{
    while(fin >> x)
        a[n++]=sum(x)*dim + dim-x;
    sort(a,a+n);
    for(i=0; i<n; i++)
        fout << dim-a[i]%dim << " ";
    return 0;
}