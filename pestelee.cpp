#include <fstream>
#include <queue>

std::ifstream fin("pestelee.in");
std::ofstream fout("pestelee.out");

struct Pozitie {
	int i;
	int j;
};

const int Dim = 505,
di[] = { -1, 0, 1, 0 },
dj[] = { 0, 1, 0, -1 };
const int mod = 10007;

int a[Dim][Dim];
int b[Dim][Dim];
int drum[Dim][Dim];
int m, n, c;
int xp, yp, xs, ys;

void CitesteDate();
void Lee(int ip, int jp);
bool Ok(int i, int j);

int main()
{
	CitesteDate();
	Lee(xp, yp);

	if (c == 1)
		fout << b[xs][ys];

	if (c == 2)
		fout << drum[xs][ys];

	return 0;
}

void CitesteDate()
{
	fin >> n >> m;

	for (int i = 1; i <= n; ++i)
		for (int j = 1; j <= m; ++j)
			fin >> a[i][j];

	fin >> xp >> yp >> xs >> ys;
	fin >> c;
}

#define iv (act.i + di[d])
#define jv (act.j + dj[d])

void Lee(int ip, int jp)
{
	std::queue<Pozitie> Q;

	Q.push({ ip, jp });
	b[ip][jp] = 1;
	drum[ip][jp] = 1;

	while (!Q.empty())
	{
		Pozitie act = Q.front();

		for (int d = 0; d < 4; ++d)
		{
			if (Ok(iv, jv))
			{
				Q.push({ iv, jv });
				b[iv][jv] = 1 + b[act.i][act.j];
				drum[iv][jv] = (drum[iv - 1][jv] + drum[iv][jv + 1] + drum[iv + 1][jv] + drum[iv][jv - 1]) % mod;
			}
		}

		Q.pop();
	}
}

bool Ok(int i, int j)
{
	if (i < 1 || i > n || j < 1 || j > m)
		return false;

	if (b[i][j])
		return false;

	if (a[i][j])
		return false;

	return true;
}