#include<fstream>
using namespace std;
 
ifstream fin("eureni.in");
ofstream fout("eureni.out");
 
int b[11];
 
int main()
{
    int s, n, e;
    fin >> s >> n >> e;
    int k = 1;
    int cnt = 0;
    b[1] = 1;
    for (int i = 2; i <= n + 1; ++i)
        b[++k] = b[i - 1] * e;
 
    for (int i = n + 1; i >= 1; --i)
    {
        if (b[i] <= s)
            fout << b[i] << ' ' << s /b[i] << '\n';
        cnt += s / b[i];
 
        s = s % b[i];
        if (s == 0) break;
    }
    fout << cnt;
 
    return 0;
}