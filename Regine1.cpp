#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;

int n;      
int x[11];   

void Regine(int k);
void Write(int k);
bool Ok(int k);

int main()
{
    cin >> n;

    Regine(1);
    return 0;
}

void Regine(int k)
{
    if (k > n)
    {
        Write(n);
        cout.flush();
        exit(0);
    }

    for (int i = 1; i <= n; ++i)
    {
        x[k] = i;
        if (Ok(k))
            Regine(k + 1);
    }
}

bool Ok(int k)
{
    for (int i = 1; i < k; ++i)
        if (x[i] == x[k] ||  
            k - i == abs(x[k] - x[i])) 
            return false;
    return true;
}

void Write(int k)
{
    for (int i = 1; i <= n; ++i, cout << '\n')
        for (int j = 1; j <= n; ++j)
            if (x[j] == i) 
                cout << "* ";
            else
                cout << "- ";
}



