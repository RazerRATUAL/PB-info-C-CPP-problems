#include <iostream>
#include <fstream>
#include <algorithm>
using namespace std;

void CitesteDate();
void Fill(int i, int j);
void NumarareContinente();
bool Ok(int i, int j);

int n, m;
const int Dim = 101;
int continent[Dim][Dim];
int c[Dim][Dim];
int ob;

ifstream fin("fill.in");
ofstream fout("fill.out");

int main()
{
    CitesteDate();
    NumarareContinente();
    fout << ob;
    return 0;
}

void CitesteDate()
{
    fin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            fin >> continent[i][j];
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
    if (i < 1 || i > n || j < 1 || j > m)
        return false;

    if (continent[i][j] == 0) 
            return false;

    if (c[i][j] != 0) 
        return false;

    return true;
}
void NumarareContinente()
{
     for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            if (continent[i][j] == 1 && c[i][j] == 0)   
            {
                ob++;
                Fill(i, j);
            }
}