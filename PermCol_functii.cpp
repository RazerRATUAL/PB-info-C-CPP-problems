#include <iostream>
using namespace std;

const int Dim = 101;
void CitesteMatrice(int a[][Dim], int& n, int& m);
void ScrieMatrice(int a[][Dim], int n, int m);
void PermCol(int a[][Dim], int n, int m);
int a[Dim][Dim];
int n, m;

int main()
{
  CitesteMatrice(a, n, m);
  PermCol(a, n, m);
  ScrieMatrice(a, n, m);

  return 0;
}

void CitesteMatrice(int a[][Dim], int& n, int& m)
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> a[i][j];
}
void PermCol(int a[][Dim], int n, int m)
{
      for (int i = 1; i <= n; ++i)
        a[i][m] = a[i][1];

}
void ScrieMatrice(int a[][Dim], int n, int m)
{
        for (int i = 1; i <= n; ++i, cout << '\n')
        for (int j = 1; j <= m; ++j)
            cout << a[i][j] << ' ';
}
