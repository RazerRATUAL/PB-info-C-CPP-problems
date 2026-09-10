
#include <iostream>

using namespace std;

int NrDiv(int n);

int n, nmin, dmax;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        if(NrDiv(i) > dmax)
        {
            dmax = NrDiv(i);
            if(nmin < i)
                nmin = i;
        }
    }
    cout << nmin;
    return 0;
}

int NrDiv(int n)
{
	int c = 0, d, p;

	for(d = 1; d * d < n; ++d)
        if(n % d == 0) // am gasit un divizor
        {
            ++c;
            p = n / d;
            if(n % p == 0)
                ++c;
        }
	if(d * d == n)
		++c;
	return c;
}
