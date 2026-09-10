#include <fstream>
#include<algorithm>
using namespace std;

ifstream fin ("buldo.in");
ofstream fout("buldo.out");

long long sum, hMax;
int a, n, h;

int main ()
{
    fin >> n;
    fin >> hMax;
    sum = hMax;

    for(long long i = 2; i <= n; ++i)
    {
        fin >> h;
        sum += h;
        hMax = min(hMax, sum / i);

    }

    fout << hMax;

    return 0;
}
