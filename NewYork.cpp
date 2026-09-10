#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("nyk.in");
ofstream fout("nyk.out");

int cmmdc(int a, int b);
int cmmdcM(int v[], int n);
int prim(int n);
 
int main()
{
    int n, m, maxc = 0, str, r, pozp;
    fin >> n;
    int maxp = 0;
    int hc[1000];
    for(int i = 1;i <= n;i++)
    {
        fin >> m;
        for(int j = 0;j < m;j++)
        {
            fin >> hc[j];
            if(prim(hc[j]) && hc[j] >= maxp)
            {
                maxp = hc[j];
                pozp = j+1;
            }
        }
        int c = cmmdcM(hc, m);
        if(c >= maxc)
        {
            maxc = c;
            str = i;
            r = maxp;
        }
    }

    if(r == 0)
        fout << "Nu am gasit casa!";
    else
        fout << str << " " << pozp << endl << maxp;

    return 0;
}

int cmmdc(int a, int b)
{
    int r;
    while(b != 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int cmmdcM(int v[], int n)
{
    int r = v[0];
    for(int i = 1;i < n;i++)
    {
        r = cmmdc(r, v[i]);
    }
    return r;
}
int prim(int n)
{
    if(n < 2)
        return 0;
    if(n == 2 || n == 3)
        return 1;
    if(n % 2 == 0 || n % 3 == 0)
        return 0;
    for(int d = 5;d * d <= n;d += 6)
        if( n % d == 0 || n % (d + 2) == 0)
            return 0;
    return 1;
}