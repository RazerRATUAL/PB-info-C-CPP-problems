#include <iostream>
#include <fstream>

using namespace std;

ifstream fin("blackfriday.in");
ofstream fout("blackfriday.out");

int main()

{
    int Dim = 11;
    int x[Dim], y[Dim];

   int n, i, ind;
   double p, pmax;
   fin >> n;

   for (i=1; i<=n; ++i)
        fin >> x[i];
   for (i=1; i<=n; ++i)
        fin >> y[i];

    pmax =(double)(x[1]-y[1])/x[1]*100;
    ind = 1;

   for (i = 2; i<=n; ++i)
   {
       p=(double)(x[i]-y[i])/x[i]*100;
       if (p > pmax)
       {
            pmax=p;
            ind = i;
       }

   }
    fout << ind;

   return 0;
}
