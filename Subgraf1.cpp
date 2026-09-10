#include <fstream>
#include <iostream>
using namespace std;
ifstream fin ("subgraf1.in");
ofstream fout ("subgraf1.out");
int a[101][101] , n , p , r , m , mn = 1000;
int main()
{
    fin >> n;
    while(fin >> p >> r)
    {
        if (a[p][r] == 0)
        {
            a[p][0]++;
            a[r][0]++;
            m++;
        }
        a[p][r] = 1;
        a[r][p] = 1;
    }
    for (int i = 1; i <= n; i++) mn = min(a[i][0], mn);
    for (int i = 1; i <= n; i++)
    {
        if (a[i][0] == mn)
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] == 1)
            {
                a[i][j] = 0;
                m--;
            }
            a[j][i] = 0;
        }
    }
    fout << m;
    return 0;
}