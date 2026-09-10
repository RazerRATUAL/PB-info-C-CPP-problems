#include <iostream>
using namespace std;

int sum, n;
int P[11], x[11];

void afis()
{
    for (int i = 1; i <= n; ++i)
        cout << x[i];
    cout << "\n";
}

void back(int k, int s)
{
    for (int i = 0; s + i <= sum && i <= 9; ++i)
    {
        if (k == 1 && i == 0)
            continue;
        else
        {
            if (!P[i])
            {
                P[i] = 1;
                x[k] = i;
                s += i;
                if (k == n && s == sum)
                    afis();
                else if (k < n)
                    back(k + 1, s);
                s -= i;
                P[i] = 0;
            }
        }
    }
}

int main()
{
    cin >> sum;
    if(sum > 45){
         cout << -1;
        exit(0);
    }
    for (int i = 1; i <= 10; ++i)
        n = i, back(1, 0);
    return 0;