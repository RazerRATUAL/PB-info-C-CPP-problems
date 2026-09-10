#include <fstream>
using namespace std;

ifstream cin("secventapara.in");
ofstream cout("secventapara.out");

int x, cnt;
int secvmax, nr_secvmax;

int main()
{
    while (cin >> x)
    {
        if (!(x % 2))
        {
            cnt++;
            if (cnt > 1)
            {
                if (cnt > secvmax)
                {
                    secvmax = cnt;
                    nr_secvmax = 1;
                }
                else if (cnt == secvmax)
                    ++nr_secvmax;
            }
        }
        else
            cnt = 0;
    }

    cout << nr_secvmax;

    return 0;
}