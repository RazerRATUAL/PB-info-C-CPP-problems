#include <iostream>
#include <algorithm>
using namespace std;

const int Fla = 1001;
int a[Fla][Fla];
int n, m;
int i1,i2;

int main()
{
cin >> n >> m;
int min1 = 1e4 + 1;
int min2 = 1e4 + 1;

for (int i = 1;i <= n; ++i)
for (int j = 1;j <= m; ++j)
cin >> a[i][j];

for (int i = 1; i <= n;++i)
{
if (a[i][1] < min1) min1 = a[i][1], i1 = i;
if (a[i][m] < min2) min2 = a[i][m], i2 = i;
}

swap(a[i1][1], a[i2][m]);

for (int i = 1; i <= n; ++i)
{
for (int j = 1; j <= m; ++j)
cout << a[i][j] << ' ';
cout << '\n';
}
return 0;
}
