/* n =  1    0    1    1    0    1
 *    c[6] c[5] c[4] c[3] c[2] c[1]
 *                j         k
 */

#include <iostream>
#include <fstream>
using namespace std;

ifstream fin("bibinar.in");
ofstream fout("bibinar.out");

int main()
{
    int n, x, c[100], m, suma;

    fin >> n;

    for(int i = 1; i <= n; ++i)
    {
        fin >> x;

        m = 0;
        while (x)
        {
           c[++m] = x % 2;
           x /= 2;
        }

        suma = 0;

        for (int j = m; j > 1; --j)
            for (int k = j - 1; k >= 1; --k)
                suma += c[j] * 2 + c[k];

        fout << suma << " ";

    }

    return 0;
}
