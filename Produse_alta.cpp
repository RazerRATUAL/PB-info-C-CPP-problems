#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

ifstream fin ("produse.in");
ofstream fout ("produse.out");

int PrimaCifra(int n);
int ADouaCifra(int n);

const int Dim = 1001;
int n, c, s, e, v[Dim];

int main()
{
    fin >> c >> n;

    for(int i = 1; i <= n; ++i)
            fin >> v[i];

    if(c == 1)
    {
        for(int i = 1; i <= n; ++i)
        {
            if(ADouaCifra(v[i]) % 2 == 0)
                ++s;

            else
                ++e;
        }

        fout << s << ' ' << e;
    }

    else
    {
        sort(v + 1, v + n + 1);

        for(int i = 1; i <= 9; ++i)
        {
            bool ok = false;

            for(int j = 1; j <= n; ++j)
                if(PrimaCifra(v[j]) == i)
                    ok = true;

            if(ok)
            {
                fout << i << ' ';

                for(int j = 1; j <= n; ++j)
                    if(PrimaCifra(v[j]) == i)
                        fout << v[j] << ' ';

                fout << '\n';
            }
        }
    }

    return 0;
}

int PrimaCifra(int n)
{
    while(n > 9)
        n /= 10;

    return n;
}

int ADouaCifra(int n)
{
    while(n > 99)
        n /= 10;

    return n % 10;
}
