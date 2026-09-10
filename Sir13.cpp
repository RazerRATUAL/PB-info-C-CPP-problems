#include <fstream>
using namespace std;
ifstream fin("sir13.in");
ofstream fout("sir13.out");
int n, x, maxi = 1000000001, mini, ok;

int main()
{
    while (fin >> x)
    {
        if (x % 2 == 0)
        {
            if (x < mini)
                ok = 1;
            else
                mini = x;
        }
        else
        {
            if (x > maxi)
                ok = 1;
            else
                maxi = x;
        }
    }
    if (ok == 0)
        fout << "DA";
    else
        fout << "NU";
    return 0;
}