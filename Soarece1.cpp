#include <fstream>
#include <iomanip>
using namespace std;
 
ifstream fin("soarece1.in");
ofstream fout("soarece1.out");
 
const int N    = 20,
          di[] = {-1, 0, 1, 0},
          dj[] = {0, 1, 0, -1};
 
char L[N][N];  /// labirintul
int x[N][N];   /// matr solutie
int n, m;
int ip, jp, is, js;
int nrsol;
 
void CitesteLabirint();
bool Ok(int i, int j);
void ScrieSol();
void Labir(int i, int j, int k);
 
int main()
{
    CitesteLabirint();
    Labir(ip, jp, 1);
 
    if (nrsol == 0)
        ScrieSol();
 
    return 0;
}
 
void Labir(int i, int j, int k)
{
    if (nrsol == 1) return;
    if (!Ok(i, j)) return;
    x[i][j] = k;
    if (i == is && j == js)
    {
        ScrieSol();
        return;
    }
 
    for (int d = 0; d < 4; ++d)
    {                int iv = i + di[d];
                int jv = j + dj[d];
                Labir(iv, jv, k + 1);
            }
 
    x[i][j] = 0; /// Demarcam (sterge urma)!!!
}
 
bool Ok(int i, int j)
{
    if (i < 1 || i > n || j < 1 || j > m) /// in afara matricei
        return false;
 
    if (L[i][j] == '#') /// obstacol
        return false;
    if (x[i][j])        /// am mai fost aici
        return false;
 
    return true;
}
 
void ScrieSol()
{
    nrsol++;
    //fout << "Solutia nr: " << nrsol << '\n';
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
            if (L[i][j] == '#')
                fout << 0 << ' ';
        else
            fout << x[i][j] << ' ';
        fout << '\n';
    }
 
    fout << "\n";
}
 
void CitesteLabirint()
{
    fin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            fin >> L[i][j];
 
            if (L[i][j] == 'S')
            {
                ip = i;
                jp = j;
            }
 
            if (L[i][j] == 'B')
            {
                is = i;
                js = j;
            }
        }
}
 