#include <fstream>
#include <algorithm>
#include <cmath>
using namespace std;

ifstream fin ("plaja2.in");
ofstream fout("plaja2.out");

const int Dim = 100001;
long long z[Dim];
long long t[Dim];
long long N, K, T;
long long val = 1;

long long Cb(int x, int y);
long long Bs(int x, int y);

int main()
{

    long long tmax = 0;
    long long valoare = 0;

    fin >> N >> K >> T;

    for (int i = 1; i <= K; ++i)
        fin >> z[i] >> t[i];

    long long primazi = t[1] + (z[1] - 1) * T;
    long long ultimazi = t[K] + (N - z[K]) * T;

    tmax = max(tmax, primazi);
    tmax = max(tmax, ultimazi);

    for (int i = 1; i < K; ++i)
    {
        valoare = Bs(val, val + 1);
        tmax = max(tmax, valoare);
        ++val;
    }

    fout << tmax;

    return 0;
}

long long Bs(int x, int y)
{
    long long pozitie = 0;

    if (t[x] < t[y])
    {
        if ((t[x] + (z[y] - z[x]) * T) <= t[y])
        {
            t[y] = (t[x] + (z[y] - z[x]) * T);
            return t[y];
        }

        else
        {
            pozitie = Cb(z[x], z[y]);
            return pozitie;
        }

    }

    if (t[y] < t[x])
    {

        if ((t[y] + (z[y] - z[x]) * T) <= t[x])
        {
            t[x] = (t[y] + (z[y] - z[x]) * T);
            return t[x];
        }

        else
        {
            pozitie = Cb(z[x], z[y]);
            return pozitie;
        }


    }

    if (t[x] == t[y])
    {
        long long a = x + y;

        return t[x] + (z[a / 2] - z[x]) * T;

    }

    return 0;

}

long long Cb(int x, int y)
{
    int tx = t[val];
    int ty = t[val + 1];

    if (t[val] > t[val + 1])
        swap(tx, ty);

    int st = x, dr = y, m;

    int minimul = 0;

    while(st <= dr)
    {
        m = (st + dr) / 2;

        if (abs((tx + (m - st) * T) - (ty + (dr - m) * T) <= T))
        {
            minimul = min((tx + (m - x) * T), (ty + (y - m) * T));
            return minimul;
        }

        else
        {
            if ((tx + (m - st) * T) - (ty + (dr - m) * T) < -T)
                st = m + 1;


            else if ((tx + (m - st) * T) - (ty + (dr - m) * T) > T)
                dr = m - 1;
        }
    }

    return 0;
}

