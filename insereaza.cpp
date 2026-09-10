#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("insereaza.in");
ofstream fout("insereaza.out");

const int Dim = 1000;
int a[Dim];
int n;
int vmax = 0;
bool PrimMax(int n)
{
    if(n < 2)   return false;

    if(n == 2)  return true;

    if(n % 2 == 0)  return false;

    for(int d = 3; d * d <= n; d += 2)
        if(n % d == 0)
            return false;

    return true;
}

int main()
{
    fin >> n;
    for (int i = 1; i <= n; ++i)
		    fin >> a[i];
		    {
		        if(PrimMax(a[i]))
                {
                    if(vmax <= a[i])
                        vmax = a[i];
                }
		    }

     if (vmax == 2)
        fout << a[i] << ' ';
     else
     {
         for (int i = 1; i <= n; ++i)
        {
            if (PrimMax(a[i]))
            {
                int vmic;
                for (int j = n; j >= i + 1; --j)
                    a[j + 1] = a[j];

                ++n;

                a[i + 1] = PrimMax(a[i]);
                ++i;
            }
        }

     }

    return 0;
}
