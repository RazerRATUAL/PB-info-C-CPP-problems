#include <fstream>
using namespace std;

ifstream fin("rapunzel.in");
ofstream fout("rapunzel.out");

int main()
{
    long long int n , m1 , m2;
    fin >> n >> m1 >> m2;
    int z=m1+m2;
    int d=n/z;
    if(d*z==n)
    fout << d;
    else
    fout << d+1;

    return 0;
}
