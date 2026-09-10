#include <iostream>
using namespace std;

int Oglindit(int n);

int main()
{
	int x;
	cin >> x;

	cout << Oglindit(x);

	return 0;
}


int Oglindit(int n)
{
	int ogl = 0;

	while (n)
	{
		ogl = ogl * 10 + n % 10;
		n /= 10;
	}

	return ogl;
}
