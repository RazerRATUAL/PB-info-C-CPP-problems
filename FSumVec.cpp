#include <iostream>
using namespace std;

int v[101];
int suma(int v[], int n, int i, int j)
{
   int s = 0;

   for (i--; i >= 1; --i)
      s += v[i];

   for (j++; j <= n; ++j)
      s += v[j];

   return s;
}