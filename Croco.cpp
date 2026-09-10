#include<fstream>
using namespace std;

ifstream fin("croco.in");
ofstream fout("croco.out");

const int Dim = 101;
int n, m;
int a[Dim][Dim];
bool c[Dim][Dim];

void CitesteMatrice();
bool Ok(int i, int j);
void NumaraObiecte();
void Fill(int i, int j);

int main()
{
    
    CitesteMatrice();
    NumaraObiecte();
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m; ++j)
        {
            if(c[i][j] == 1 && (i + j) % 2 == 0)
                fout << "C ";
                
            else if( c[i][j] == 1)
                fout << "E ";
            else
                fout << "A ";
        }
        fout << '\n';
    }



        
    return 0;
}

void CitesteMatrice()
{
    fin >> n >> m;
    
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            fin >> a[i][j];
}

void Fill(int i, int j)
{
    if(!Ok(i, j))
        return;
        
    c[i][j] = 1;
    
    Fill(i - 1, j);
    Fill(i, j + 1);
    Fill(i + 1, j);
    Fill(i, j - 1);
}

void NumaraObiecte()
{
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            if (a[i][j] != 0 && c[i][j] == 0)
            {
                Fill(i, j);
            }
}

bool Ok(int i, int j)
{
    if (i < 1 || i > n || j < 1 || j > m)
        return false;
        
    if (a[i][j] == 0)
        return false;
        
    if (c[i][j] != 0)
        return false;
    return true;
}
