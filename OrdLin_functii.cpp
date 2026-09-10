#include <iostream>
using namespace std;

const int Dim = 101;

void CitesteMatrice(int a[][Dim], int& n, int& m);
void ScrieMatrice(int a[][Dim], int n, int m);
void OrdLinii(int a[][Dim], int n, int m);
void SchimbaLinii(int a[], int b[], int m);
int SumaLinie(int L[], int m);

int main()
{
	int a[Dim][Dim], n, m;

	CitesteMatrice(a, n, m);
	OrdLinii(a, n, m);
	ScrieMatrice(a, n, m);

	return 0;
}

int SumaLinie(int L[], int m)
{
	int suma = 0;
	for (int j = 1; j <= m; ++j)
		suma += L[j];

	return suma;
}

void Swap(int& a, int& b)
{
	int aux = a;
	a = b;
	b = aux;
}

void SumeLinii(int s[], int a[][Dim], int n, int m)
{
	for (int i = 1; i <= n; ++i)
		s[i] += SumaLinie(a[i], m);
}


void OrdLinii(int a[][Dim], int n, int m)
{
	int s[101] = {0}; // s[i] = suma liniei i
	SumeLinii(s, a, n, m);

	for (int i = 1; i < n; ++i)
		for (int j = i + 1; j <= n; ++j)
			if (s[i] >= s[j])
			{
				SchimbaLinii(a[i], a[j], m);
				Swap(s[i], s[j]);
			}

}

void SchimbaLinii(int a[], int b[], int m)
{
	for (int j = 1; j <= m; ++j)
		Swap(a[j], b[j]);
}

void CitesteMatrice(int a[][Dim], int& n, int& m)
{
	cin >> n >> m;
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= m; ++j)
			cin >> a[i][j];
}

void ScrieMatrice(int a[][Dim], int n, int m)
{
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 1; j <= m; ++j)
			cout << a[i][j] << ' ';
		cout << '\n';
	}
}


