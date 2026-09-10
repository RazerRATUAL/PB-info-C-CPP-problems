#include <fstream>
#include <algorithm>

using namespace std;
ifstream fin("puterik.in");
ofstream fout("puterik.out");
int put(int n , int k)
{
    int p = 1;
    for(int i = 0 ; p < n ; ++i)
    {
        p*=k;
    }
    if(p==n)
    return 1;
    else
    return 0;
}
int main()
{
    int n , k;
    fin >> n >> k;
    int a[100];
    for(int i = 0 ; i < n ; ++i)
    fin >> a[i];
    sort(a, a+n);
    for(int i = 0 ; i < n ; ++i)
    {
        if(put(a[i],k))
        fout << a[i] << ' ';
    }

    fin.close();
    fout.close();

    return 0;
}
