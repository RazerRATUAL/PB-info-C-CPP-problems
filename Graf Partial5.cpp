#include <fstream>
#include <cmath>

using namespace std;
ifstream fin ("graf_partial_5.in");
ofstream fout ("graf_partial_5.out");
int n,a[101][101],G[101],k;

int Grad(int i)
{
    int g = 0;
    for(int j = 1; j <= n; j++)
        g = g +a[i][j];
    return g;
}

int main()
{
    int x, y;
    fin>> n>> k;
    while(fin>> x>> y)
        a[x][y] = a[y][x] = 1;
    for(int i = 1; i <= n; i++)
        G[i] = Grad(i);
    for(int i = 1;i <= n; i++)
        for(int j = 1; j <= n; j++)
            if(a[i][j] == 1 && G[i] >= k && G[j] >= k)
                    a[i][j] = a[j][i] = 0;
    for(int i = 1;i <= n; i++)
    {
        for(int j = 1;j <= n; j++)
            fout<< a[i][j]<< " ";
        fout<< endl;
    }
    return 0;
}