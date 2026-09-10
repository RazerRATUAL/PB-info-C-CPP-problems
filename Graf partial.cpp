#include <fstream>
using namespace std;
ifstream fin("graf_partial.in");
ofstream fout("graf_partial.out");
int a[105][105];
int main()
{
    int n , x , y , par = 0;
    fin >> n;
    while(fin >> x >> y)
    {
        if (!a[x][y])par++;
        a[x][y]=1;
        a[y][x]=1;
    }
    for (int i = 1; i <= n; i++)
    {
        for(int j = 1 ; j <= n ; ++j)
        {
            if(i % 2 == j % 2 && a[i][j] == 1)
            {
                a[i][j] = 0;
                a[j][i] = 0;
                par--;
            }
        }
    }
    fout << par;
    return 0;
}