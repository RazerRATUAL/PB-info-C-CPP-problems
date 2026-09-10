#include <fstream>
using namespace std;
ifstream fin("eureni.in");
ofstream fout("eureni.out");

int a[11];

int s, n, e, cnt, k = 1;
int main(){
    fin >> s>> n>> e;
    a[1] = 1;
    for (int i = 2; i <= n + 1; ++i)
        a[++k] = a[i - 1] * e;
 
    for (int i = n + 1; i >= 1; --i)
    {
        if (a[i] <= s)
            fout << a[i] << ' ' << s /a[i] << '\n';
        cnt += s / a[i];
 
        s = s % a[i];
        if (s == 0) break;
    }
    fout << cnt;

return 0;
}