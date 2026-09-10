#include<fstream>
using namespace std;

ifstream fin("oaste2.in");
ofstream fout("oaste2.out");

const int Dim = 101,
di[] = {-1, 0, 1, 0}, dj[] = {0, 1, 0, -1};
int n, m, a[Dim][Dim];
int c[Dim][Dim];
int ob;
int nsol[Dim * Dim]; // nr de soldati
int np[Dim]; // nr de "patratele"

void Citire();
void Fill(int i, int j);
bool OK(int i, int j);
void NumaraObiecte();

int main()
{
    Citire();
    NumaraObiecte();
    
    int vmaxsold = -1, vminpatrate = 10000;

    for(int i = 1; i <= ob; ++i)
        if(nsol[i] > vmaxsold)
            vmaxsold = nsol[i];

    for(int i = 1; i <= ob; ++i)
        {
            if(np[i] < vminpatrate && nsol[i] == vmaxsold)
            {
                vminpatrate = np[i];
            }
        }

    fout << vmaxsold << " " << vminpatrate;

    return 0;
}

bool OK(int i, int j)
{
    if(i > n || j > m || i < 1 || j < 1)
        return false;
        
    if(a[i][j] == 0)
        return false;
        
    if(c[i][j] > 0)
        return false;
    return true;
}

#define iv (i + di[d])
#define jv (j + dj[d])

void Fill(int i, int j)
{
    if(!OK(i, j)) return;

    c[i][j] = ob;
    
    nsol[ob] += a[i][j];
    
    np[ob]++;
    
    for(int d = 0; d < 4; ++d)
        Fill(iv, jv);
}

void NumaraObiecte()
{
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            if(a[i][j] > 0 && c[i][j] == 0)
    {
        ob++;
        Fill(i, j);
    }
}

void Citire()
{
    fin >> n >> m;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            fin >> a[i][j];
}