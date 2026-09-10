#include <fstream>
using namespace std;

ifstream fin("moscraciun.in");
ofstream fout("moscraciun.out");

const int Dim  = 101,
          di[] = {-1, 0, 1, 0},
          dj[] = {0, 1, 0, -1};

int B[Dim][Dim]; // se citeste
bool c[Dim][Dim];
int n, m;
int i_mos, j_mos;
int spiridusi;

void CitesteDate();
void Fill(int i, int j);
bool Ok(int i, int j);

int main()
{
	CitesteDate();
	Fill(i_mos, j_mos);

	fout << spiridusi;

	return 0;
}

#define iv (i + di[d])
#define jv (j + dj[d])

void Fill(int i, int j)
{
	if (!Ok(i, j)) return;
	c[i][j] = true;
	if (B[i][j] == 3)
		spiridusi++;

	for (int d = 0; d < 4; ++d)
		Fill(iv, jv);
}

bool Ok(int i, int j)
{
	if (i < 1 || i > n || j < 1 || j > m)
		return false;

	if (B[i][j] == 0) // apa
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
		{
			fin >> B[i][j];
			if (B[i][j] == 2)
				i_mos = i, j_mos = j;
		}
}

