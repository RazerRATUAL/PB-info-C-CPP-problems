#include <iostream>
using namespace std;

bool Prim(int a);

const int Dim = 102;

int main()
{
int a[Dim][Dim], n, m, cnt = 0;

cin >> n >> m;
for (int i = 1; i <= n; ++i)
for (int j = 1; j <= m; ++j)
cin >> a[i][j];

for (int i = 2; i <= n; i += 2)
{
for (int j = 1; j <= m; ++j)
if (Prim (a[i][j]))
cnt ++;
}
cout << cnt;
}

bool Prim(int a)
{
if (a < 2)
return false;
if (a == 2)
return true;
if (a % 2 == 0)
return false;
for (int i = 3; i * i <= a; i += 2)
if (a % i == 0)
return false;
return true;
}
