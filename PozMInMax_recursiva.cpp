#include <iostream>
using namespace std;

int const Dim = 1001;
int a[Dim];
void CitireSir(int a[], int n);
void MinMax(int a[], int n, int& min, int& max, int imin, int imax);

int main()
{
    int n, max = -1e9, min = 1e9;
    int imax, imin;
    cin >> n;
    CitireSir(a, n);
    MinMax(a, n, min, max, imin, imax);
     cout << imin << " "<< imax;
}

void CitireSir(int a[], int n)
{
    if (n == 0) return;

	CitireSir(a, n - 1);
	cin >> a[n];
}

void MinMax(int a[], int n, int& min, int& max,int imin,int imax)
{
    if (n == 0) return;
	      if(a[n] < min)
        {
            min=a[n];
            imin = n;
        }
        if(a[n] > max)
        {
            max = a[n];
            imax = n;
        }
        MinMax(a, n - 1, min, max, imin, imax);
}
