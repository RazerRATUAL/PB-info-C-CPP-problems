#include <fstream>
#include <algorithm>
using namespace std;

ifstream fin("masina.in");
ofstream fout("masina.out");

bool ok;
int n, C, dist;
int cnt;
int s[1005];

void Citire();
void Greedy();

int main()
{
    Citire();
    Greedy();

    if(!ok)
        fout << cnt-1;

    return 0;
}

void Citire()
{
    fin >> dist >> C;
    fin >> n;

    for(int i = 1; i <= n; ++i)
        fin >> s[i];

}

void Greedy()
{
    s[0] = 0;
    s[n + 1] = dist;
    int j;

    for(int i = 0; i <= n; ++i)
    {
        j = i + 1;

        if((s[j] - s[i]) > C)
        {
            fout << -1;
            ok = true;
            break;
        }

        while(j <= n + 1 && s[j] - s[i] < C)
            j++;


        cnt++;
      //  fout << j <<'\n';
        if(s[j] - s[i] > C)
            i = j - 2;

        else
            if(s[j] - s[i] == C)
                i = j-1;
        if( j == n + 2) i = n + 1;
    }

}