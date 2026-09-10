#include <fstream>

using namespace std;

ifstream fin("plopi1.in");
ofstream fout("plopi1.out");

int n,LG[1000],A[1000],l, lmax;

int main()
{
    fin >> n;
    for(int i = 1; i <= n; i++)
        fin >> A[i];
        for(int i = n; i >= 1; i--)
        {
            l = 0;
            for(int j = i + 1; j <= n; j++)
                if(A[i] > A[j] && LG[j] > l)
                l = LG[j];
                LG[i] = l + 1;
            if(LG[i] > lmax)
                lmax = LG[i];
        }
        fout << n - lmax;
    return 0;
}