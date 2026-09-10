#include <fstream>
using namespace std;

long long Cmmmc(long long a, long long b);
long long Cmmdc(long long a, long long b);

int main()
{
    ifstream fin("aoc2020.in");
    ofstream fout("aoc2020.out");

    long long cmmmc;
    int b, n;
    fin >> n >> cmmmc;

    for (int i = 2; i <= n; i++)
    {
        fin >> b;
        cmmmc = Cmmmc(cmmmc, b);
    }
    fout << cmmmc;
}

long long Cmmmc(long long a, long long b)
{
    return (a * b) / Cmmdc(a, b);
}

long long Cmmdc(long long a, long long b)
{
    long long rest;
    while (b)
    {
        rest = a % b;
        a = b;
        b = rest;
    }
    return a;
}
