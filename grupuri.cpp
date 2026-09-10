#include <fstream>
#include <algorithm>
#include <iomanip>
using namespace std;

ifstream fin("grupuri.in");
ofstream fout("grupuri.out");

const int Dim = 100;

int grup[Dim][Dim];
int n;
int c[Dim][Dim]; 
                 
int  ob;        

void CitesteDate();
void Fill(int i, int j);
void NumaraGrupuri();
bool Ok(int i, int j);
void ScrieSol();

int main()
{
    CitesteDate();
    NumaraGrupuri();
    fout << ob;
    return 0;
}

void CitesteDate()
{
    fin >> n;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            fin >> grup[i][j];
}
 void Fill(int i, int j)
 {
    if (!Ok(i, j)) return;
    c[i][j] = ob;
    Fill(i - 1, j); 
    Fill(i, j + 1); 
    Fill(i + 1, j); 
    Fill(i, j - 1); 
}

bool Ok(int i, int j)
{
    if (i < 1 || i > n || j < 1 || j > n)
        return false;

    if (grup[i][j] == 0) 
            return false;

    if (c[i][j] != 0) 
        return false;

    return true;
}
void NumarareGrupuri()
{
     for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            if (grup[i][j] == 1 && c[i][j] == 0)   
            {
                ob++;
                Fill(i, j);
            }
}