#include <iostream>
using namespace std;



int main()
{
	long long n;
	cin >> n;

	long long sd = 0;
	long long p;
    long long d;
	for (d = 1; d * d < n; ++d)
		if (n % d == 0)
		{
			if (d % 2 == 0)
				sd += d;
			p = n / d;
			if (p % 2 == 0)
				sd += p;
		}

	if (d % 2 == 1 && d * d == n)
		sd += d;

	cout << sd;


	return 0;
}

