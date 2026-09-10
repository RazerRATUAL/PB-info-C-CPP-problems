#include <fstream>
#include <algorithm>
using namespace std;

int x[20], n, nrsol;
int a[30];
ifstream cin("permutari2.in");
ofstream cout("permutari2.out");

void Citire()
{
    cin >> n;

    for(int i = 1; i <= n; ++i)
        cin >> a[i];
}

void Afisare()
{
    nrsol++;
    for(int i = 1; i <= n; ++i)
        cout << a[x[i]] << " ";
    cout << '\n';
}

bool Ok(int k)
{
    for(int i = 1; i < k; ++i)
        if(x[k] == x[i]) return false;
        return true;
}

void Back(int k)
{
    if(k == n + 1)
    {
        Afisare();
        return;
    }
        else
        {
            for(int i = 1; i <= n ; ++i)
            {
                x[k] = i;///gener pozitii din vector
                if(Ok(k))
                    Back(k + 1);
            }
        }
}

int main()
{
    Citire();
    sort(a + 1, a + n + 1);
    Back(1);
  //  cout << "numar solutii = " << nrsol;
    return 0;
}