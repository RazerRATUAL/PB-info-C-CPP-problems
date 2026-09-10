#include <fstream>
using namespace std;

ifstream fin("bipartit.in");
ofstream fout("bipartit.out");

// void CitesteDate();
// void Bipartit();

int a[101][101], n, m , x, y, k , v[2500];


int main()
{
    int ok = 0;
    fin >> n >> m;
    for(int i = 1 ; i <= m ; ++i)
    {
        fin >> x >> y;
        if (a[x][y] == 0)
        {
            a[x][0]++;
            a[y][0]++;
        }
        a[x][y] = 1;
        a[y][x] = 1;
    }
    fin >> k;
    for(int i = 1 ; i <= k ; ++i)
        fin >> v[i];

        for(int i = 1 ; i <= n ; ++i)
        {
        for(int j = 1 ; j <= n ; ++j)
            {
                for(int p = 1 ; p <= k ; ++p)
                {
                    if(v[p] == i || v[p] == j)
                        a[i][j] = 0;
                }
            }
        }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            if(a[i][j] == 1) ok = 1;
    }
    if(ok == 1) 
        fout << "NU";
    else 
        fout << "DA";
}

//void CitesteDate()


// void Bipartit()
