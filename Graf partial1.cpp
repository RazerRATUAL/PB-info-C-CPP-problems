#include <fstream>
using namespace std;
ifstream fin("graf_partial_1.in");
ofstream fout("graf_partial_1.out");
int a[105][105];
int main()
{
    int n , x , y , mini=1000000 , maxi=0 , cnt = 0;
    fin >> n;
    while(fin >> x >> y)
    {
        if (!a[x][y])
        {
            a[x][0]++;
            a[y][0]++;
        }
        a[x][y]=1;
        a[y][x]=1;
    }
    for (int i = 1; i <= n; i++)
    {
        mini = min(mini, a[i][0]);
        maxi = max(maxi, a[i][0]);
    }
    for (int i = 1; i <= n; i ++)
    {
        if (a[i][0] == mini)
        {
            for (int j = 1; j <= n; j ++)
                if (a[j][0] == maxi && a[i][j] == 1)
                {
                    a[i][j] = 0;
                    a[j][i] = 0;
                    cnt++;
                }
        }
    }
    fout << cnt << endl;
    for(int i = 1 ; i <= n ; ++i)
    {
        for(int j = 1 ; j <= n ; j++)
            fout << a[i][j] << " ";
        fout << endl;
    }
    return 0;
}