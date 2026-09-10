#include <fstream>
using namespace std;

ifstream cin("secventauniforma.in");
ofstream cout("secventauniforma.out");

int main()
{
    int a, b, lmax = 1, l = 0, val;
    cin >> a;
    while (cin >> b)
    {
        if (a == b)
            l++;
        else
        {
            if (l >= lmax)
            {
                lmax = l;
                val = a;
            }
            l = 1;
        }

        a = b;
    }

    if (l >= lmax)
    {
        lmax = l;
        val = a;
    }
    cout << lmax << endl;
    for (int i = 1; i <= lmax; ++i)
        cout << val << " ";

    return 0;
}