#include <fstream>
using namespace std;

const int N = 1001;
ifstream fin("inordine.in");
ofstream fout("inordine.out");

struct Nod {
    int X;
    int st, dr;  
};

int X;       
int st, dr;  
int n;
Nod arb[N];
int t[N];    
int rad;

void CitesteArb();
void InOrdine(int nod);

int main()
{
    CitesteArb();
    InOrdine(rad);
}

void CitesteArb()
{
    fin >> n;
    for (int nod = 1; nod <= n; ++nod)
    {
        fin >> X >> st >> dr;
        arb[nod].X = X;
        arb[nod].st = st;
        arb[nod].dr = dr;

        if (st) t[st] = nod;
        if (dr) t[dr] = nod;
    }

    for (int x = 1; x <= n; ++x)
        if (t[x] == 0)
        {
            rad = x;
            break;
        }
}

void InOrdine(int nod)
{
    int fs = arb[nod].st;
    int fd = arb[nod].dr;

    if(fs)
        InOrdine(arb[nod].st);

    fout << arb[nod].X << ' ';

    if(fd)
    InOrdine(arb[nod].dr);
}
