#include <fstream>
#include <algorithm>

using namespace std;
ifstream fin("sort2.in");
ofstream fout("sort2.out");
int tr(int n)
{
    int cnt = 0;
    while(n)
    {
        cnt++;
        n /= 10;
    }
    if(cnt <= 2)
        return 1;
    else
        return 0;
}
int main()
{
    int a[100];
    int i = 0;
    int ok = 0;

    while(fin >> a[i])
        i++;
        sort(a , a + i);

    for(int j = 0 ; j < i ; ++j)
    {
        if(tr(a[j]))
        {
        fout << a[j] << ' ';
            ok++;
        }
    }
    if(ok == 0)
        fout << "NU EXISTA";
    fin.close();
    fout.close();

    return 0;
}
