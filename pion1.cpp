#include <iostream>
#include <algorithm>
using namespace std;

const int N = 101;

int a[N][N];
int n;
int s[N][N];
int smax;

void CitesteTabla();
void Piese();

int main()
{
	CitesteTabla();
	Piese();

	cout << smax;
}
void CitesteTabla()
{
	cin >> n;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
			cin >> a[i][j];
}

void Piese()
{
	for(int i = 1; i <= n; ++i)
		for (int j = 1; j <= n; ++j)
		{
			if (a[i][j] == 0)
				s[i][j] = s[i - 1][j] + a[i][j];
			else
				s[i][j] = max(s[i - 1][j - 1], s[i - 1][j + 1]) + a[i][j];
			
					
		}

	smax = 0;
	for (int i = 1; i <= n; ++i)
		smax = max(smax, s[n][i]);
}
