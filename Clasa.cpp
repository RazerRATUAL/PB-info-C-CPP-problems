#include <iostream>
#include <cstring>
using namespace std;

struct elev
{
	char nume[101], prenume[101];
	int media1, media2, media3; 
	double m; 
}a[101];


int main()
{
    int n, p, nr;
    double s, media;
	cin >> n >> p;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i].nume >> a[i].prenume >> a[i].media1 >> a[i].media2 >> a[i].media3;
		a[i].m = (a[i].media1 + a[i].media2 + a[i].media3) / 3.0;
		s = s + a[i].m;
	}
	media = s / n; 
	if (p == 1)
	{
		for (int i=1; i<=n; i++)
		{
			if (a[i].m>media) 
				nr++;
		}
		cout << nr; 
	}
	else
	{
		cout << media << "\n";
		for (int i = 1; i < n; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
                if (a[i].m < a[j].m || (a[i].m == a[j].m && strcmp(a[i].nume, a[j].nume) > 0||
					(a[i].m == a[j].m && strcmp(a[i].nume, a[j].nume) == 0) && strcmp(a[i].prenume, a[j].prenume) > 0))
					swap(a[i], a[j]);
			}
		}
		for (int i = 1; i <= n; i++)
		{
			cout << a[i].nume << " " << a[i].prenume << " " << a[i].m << "\n";
		}
	}

    return 0;
}