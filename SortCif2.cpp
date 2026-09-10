#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;
ifstream fin("sortcif2.in");
ofstream fout("sortcif2.out");
int sum(int n)
{
    int c = 0;
    while (n)
    {
        c = n % 10;
        n /= 10;
    }
    return c;
}
int main()
{
    int n;
    fin >> n;
    int a[1001];
    int v[1001];
    int p[(int i = 0 ; i < n; ++i)1001];
    for
    {
        fin >> a[i];
        v[i] = sum(a[i]);
    }
    sort(v, v + n);
    for (int i = 0 ; i < n ; ++i)
    {
        int cnt = 0;
        for (int j = 0 ; j < n ; ++j)
        if (v[i] == sum(a[j]) && cnt == 0 && p[j] != a[j])
        {
        fout << a[j] << ' ';
        cnt++;
        p[j]=a[j];
        }
    }

    fin.close();
    fout.close();

    return 0;
}
