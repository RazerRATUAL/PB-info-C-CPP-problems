#include <iostream>

const int Dim = 21;
int x[Dim];
int n, L;
std::string s;

void Perm(int k);
bool Ok(int k);
void AfiseazaSol();

int main()
{
    std::cin >> s >> L;
    n = s.size();
    s = ' ' + s;

    Perm(1);
}

void Perm(int k)
{
    if (k > n - L)
    {
        AfiseazaSol();
        return;
    }

    for (int i = k == 1 ? 1 : x[k - 1] + 1; i <= n; ++i)
    {
        x[k] = i;

        if (Ok(k))
            Perm(k + 1);
    }
}

bool Ok(int k)
{
    for (int i = 1; i < k; ++i)
        if (x[i] == x[k])
            return false;

    return true;
}

void AfiseazaSol()
{
    for (int i = 1; i <= n; ++i)
        std::cout << s[x[i]];
    std::cout << '\n';
}