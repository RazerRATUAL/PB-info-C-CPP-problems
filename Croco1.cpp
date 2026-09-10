#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin("croco.in");
ofstream fout("croco.out");

const int Dim = 101,
di[] = { 1,0,-1,0 },
dj[] = { 0,1,0,-1 };
int a[Dim][Dim], n, m;
int cnt1 = 0, cnt2 = 0;
int croco = 0, ele = 0;

void CitesteDate();
bool Ok(int i, int j);
void Fill(int i, int j, bool c);
void NumaraCE();

int main()
{
    CitesteDate();
    NumaraCE();

    fout << croco << ' ' << ele;

    return 0;
}

void NumaraCE()
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (a[i][j] == 0)
            {
                cnt1 = 0, cnt2 = 0;
                bool c = true;
                Fill(i, j, c);
                if (cnt1 > cnt2)
                    croco += cnt1, ele += cnt2;
                else
                    croco += cnt2, ele += cnt1;
            }
        }
    }
}

#define iv (i + di[d])
#define jv (j + dj[d])

void Fill(int i, int j, bool c)
{
    if (!Ok(i, j))
        return;

    a[i][j] = 1;

    if (c)
        cnt1++;
    else
        cnt2++;

    c = !c;

    for (int d = 0; d < 4; ++d)
        Fill(iv, jv, c);
}

bool Ok(int i, int j)
{
    if (i < 1 || i > n || j < 1 || j > m)
        return false;

    if (a[i][j] == 1)
        return false;

    return true;
}

void CitesteDate()
{
    fin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            fin >> a[i][j];
} 
