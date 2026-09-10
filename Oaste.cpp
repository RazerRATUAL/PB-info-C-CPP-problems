#include <fstream>
using namespace std;

ifstream fin("oaste.in");
ofstream fout("oaste.out");

const int Dim  = 101,
          di[] = {-1, 0, 1, 0},
          dj[] = {0, 1, 0, -1};

int s[Dim][Dim]; // soldatii
bool c[Dim][Dim]; //
int n, m;
int soldati;     // nr de soldati din statul curent (pe care se face fill)
int max_sold;    // nr max de soldati dintre toate statele
int i_max, j_max;
int I, J;
int max_sold_reg = 0;

void CitesteDate();
void Fill(int i, int j);
bool Ok(int i, int j);
void Rezolva();

int main()
{
	CitesteDate();
	Rezolva();

	fout << s[i_max][j_max] << ' ' << i_max << ' ' << j_max;

	return 0;
}

void Rezolva()
{
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= m; ++j)
			if (!c[i][j])
			{
				soldati = 0;
				max_sold_reg = 0;

				Fill(i, j);

				if (soldati > max_sold)
				{
					max_sold = soldati;
					i_max = I, j_max = J;
				}
			}
}

#define iv (i + di[d])
#define jv (j + dj[d])

void Fill(int i, int j)
{
	if (!Ok(i, j)) return;
	c[i][j] = true;
	soldati += s[i][j];

	if (s[i][j] > max_sold_reg)
	{
		max_sold_reg = s[i][j];
		I = i, J = j;
	}

	for (int d = 0; d < 4; ++d)
		Fill(iv, jv);
}

bool Ok(int i, int j)
{
	if (i < 1 || i > n || j < 1 || j > m)
		return false;

	if (s[i][j] == 0) // granita
		return false;

	if (c[i][j])
		return false;
	return true;
}

void CitesteDate()
{
	fin >> n >> m;
	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= m; ++j)
			fin >> s[i][j];
}

