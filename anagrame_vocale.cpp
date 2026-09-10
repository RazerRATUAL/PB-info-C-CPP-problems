#include <iostream>
#include <fstream>
#include <algorithm>
#include <cstring>
using namespace std;

char a[15];
char x[15];
bool pus[15];
int n;
char voc[] = "aeiou";

void Anagrame(int k);
void Afiseaza();
bool Verif(int k);

int main()
{
    cin.getline(a, 15);
    n = strlen(a);

    sort(a, a + n);
    Anagrame(0);
}

void Anagrame(int k)
{
    if (k == n)
    {
        Afiseaza();
        return;
    }

    for (int i = 0; i < n; ++i)
    {
        x[k] = a[i];
        if (Verif(k))
            Anagrame(k + 1);
    }
}

bool Verif(int k)
{
    for (int i = 0; i < k; ++i)
        if (x[i] == x[k])
            return false;
    if (!strchr(voc, x[0]))
        return false;
    if (k == n - 1 && !strchr(voc, x[n - 1]))
        return false;
    return true;
}

void Afiseaza()
{
    cout << x << '\n';
}