#include <iostream>
#include <fstream>
#include <unordered_map>
using namespace std;

ifstream fin("entries.in");
ofstream fout("entries.out");

unordered_map<int, int> t; // sau map

int Find(int x)
{
    if (t[x] == 0) return x;
    return t[x] = Find(t[x]);
}

void Union(int a, int b)
{
    int ra = Find(a);
    int rb = Find(b);

    if (ra != rb)
        t[rb] = ra;
}

int main()
{
    int n;
    fin >> n;
    int q, x, y;
    while (n--)
    {
        fin >> x >> y >> q;
        if (q == 1)
            Union(x, y);
        else
            fout << (Find(x) == Find(y)) << '\n';
    }
}