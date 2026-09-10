#include <iostream>

using namespace std;

int n, x[11], a[20], s, c[20];
bool ok = false;

void backtrack(int k, int sp)
{
    int i, j;

    for(i = 0; i <= c[k] && !ok; i++) 
    {
        x[k] = i;
        sp += x[k] * a[k];
        if(sp <= s && k <= n) {
            if(k == n && sp == s)
            {
                for(j = 1; j <= n; j++)
                    cout << x[j] << " ";
                ok = 1;
            }
            else if(k < n)
                backtrack(k + 1, sp);
        }
        sp -= x[k] * a[k];
    }
}

int main()
{
    int i;

    cin >> n >> s;

    for(i = 1; i <= n; i++)
        cin >> a[i];

    for(i = 1; i <= n; i++)
        cin >> c[i];

    backtrack(1, 0);

    return 0;
}