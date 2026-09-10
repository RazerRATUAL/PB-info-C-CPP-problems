#include <fstream>
#include <algorithm>
using namespace std;
 
ifstream fin("proiecte.in");
ofstream fout("proiecte.out");
 
struct Proiect{
int t, ind;
 
bool operator < (Proiect const& a) const
{
    if (t < a.t) return true;
    return false;
}
}p[1001];
int n;
 
void CitesteDate()
{
    fin >> n;
    for (int i = 1; i <= n; ++i)
{
    fin >> p[i].t;
    p[i].ind = i;
}
}
 
void ScrieDate()
{
 for(int i = 1; i <= n; ++ i)
        fout << p[i].ind << ' ';
}
 
int main()
{
    CitesteDate();
    sort(p + 1, p + n + 1);
    ScrieDate();
 
    return 0;
}
 