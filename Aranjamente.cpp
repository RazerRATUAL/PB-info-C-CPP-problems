#include <fstream>
using namespace std;

ifstream fin("aranjamente.in");
ofstream fout("aranjamente.out");

int x[100];
bool s[100];
int n, p;

void Aranj(int k);
void ScrieSol();

int main()
{
    fin >> n >> p;
    Aranj(1);

    return 0;
}

void Aranj(int k)
{
    if (k > p)
    {
        ScrieSol();
        return;
    }

    for (int i = 1; i <= n; ++i)
    {
        x[k] = i;
        if (!s[i])
        {
            s[i] = true;
            Aranj(k + 1);
            s[i] = false;
        }
    }
}

void ScrieSol()
{
    for (int i = 1; i <= p; ++i)
        fout << x[i] << ' ';
    fout << '\n';
}
