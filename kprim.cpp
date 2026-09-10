#include <fstream>
using namespace std;
ifstream fin("kprim.in");
ofstream fout("kprim.out");
unsigned long long prim (unsigned long long n)
{
    if (n == 0 || n == 1) return 0;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    for (unsigned int i = 3;i * i <= n; i += 2)
        if(n%i == 0) return 0;
    return 1;
}
int main()
{
     unsigned long long n, x, r;
     fin >> n;

     if(n==1)
        fout << 9;
     else
     {
         x = 3;
     while(n > 0)
     {
        if(prim(x))
        {
            r = x;
            n--;
        }
        x++;
     }
     unsigned long long p;
     p = r * r;
     fout << p;
     }
    return 0;
}
