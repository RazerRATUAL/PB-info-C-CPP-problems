#include <iostream>
#include <cstring>

using namespace std;

int n, m;
char cuv[40][30], s[40][30];
bool fazan;
bool folosit[40];

void afis()
{
	for (int i = 1; i <= m; i++)
		cout << s[i] << ' ';
	cout << '\n';
	if (fazan == false)
		fazan = true;
}

void back(int poz)
{
	for (int i = 1; i <= n; i++)
		if(folosit[i] == false)
		{
			strcpy(s[poz], cuv[i]);
			folosit[i] = true;
			int l = strlen(s[poz - 1]);
			if ((s[poz - 1][l - 2] == s[poz][0] && s[poz - 1][l - 1] == s[poz][1]) || poz == 1)
			{
				if (poz == m)
					afis();
				else if (poz < m)
					back(poz + 1);
			}
			folosit[i] = false;
		}
}

int main()
{
	cin >> n >> m;
	cin.get();
	for (int i = 1; i <= n; i++)
		cin >> cuv[i];
	for (int i = 1; i <= n; i++)
		for (int j = i + 1; j <= n; j++)
			if (strcmp(cuv[i], cuv[j]) == 1)
				swap(cuv[i], cuv[j]);
	back(1);
	if (fazan == false)
		cout << "IMPOSIBIL";
	return 0;
}