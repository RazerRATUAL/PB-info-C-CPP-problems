#include <fstream>
using namespace std;

ifstream cin("nrcurat.in");
ofstream cout("nrcurat.out");

int urm(int n)
{
    int nr = 0, cn = n;
    while(n)
    {
        nr = nr * 10 + 9;
        n/=10;
    }
    return nr - cn;
}

int main()
	{
    int x;
    for(; cin >> x;){
        int urma = urm(x);
        int d = 0;
        while(x)
        {
            d = d * 10 + x % 10;
            x/=10;
        }
        if(urma == d)
            cout << 1 << ' ';
        else
            cout << 0 << ' ';
    }
    return 0;
}
