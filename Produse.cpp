#include <iostream>
#include <cmath>
#include <fstream>
#include <algorithm>

using namespace std;
ifstream fin("produse.in");
ofstream fout("produse.out");

int n, m, cer, a[1001];
bool epuizat(int n)
{
    while(n > 99)
        n /= 10;
    return (n % 10) % 2 == 1;
}
int pc(int n)
{
    while(n > 9)
        n/=10;
    return n;
}
int main()
{
    fin >> cer >> n;
    for(int i = 1; i <= n; ++i)
        fin >> a[i];
    if(cer == 1)
        {
        int cnt1 = 0, cnt2 = 0;
        for(int i = 1; i <= n; ++i)
            if(epuizat(a[i]))
                cnt1++;
            else
                cnt2++;
        fout << cnt2 << ' ' << cnt1 << ' ';
        }
    else
        {
        sort (a + 1, a + n + 1);
        for(int i = 1; i <= 9; ++i)
            {
            bool ok = false;
            for(int j = 1; j <= n; ++j)
                if(pc(a[j]) == i)
                    ok = true;
            if(ok)
                {
                fout << i << ' ';
                for(int j = 1; j <= n; ++j)
                    if(pc(a[j]) == i)
                        fout << a[j] << ' ';
                fout << endl;
                }
            }
        }
    return 0;
}
