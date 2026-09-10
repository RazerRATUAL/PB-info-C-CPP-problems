#include <iostream>
using namespace std;

int Oglindit(int n);

int main()
{
    int n;
    cin >> n;
    n = Oglindit(n);
    int nrdiv = 0;
    for (int i = 1; i <= n;i++)
    {
        if (n % i == 0)
            nrdiv++;
    }
    cout << nrdiv;

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
