#include <iostream>

using namespace std;

int n, x[7], v[7], s;
bool found;

void Back(int k, int sp)
{
    int i, j;

    for(i = 0; i <= (s - sp) / v[k] && !found; i++) 
    {
        x[k] = i;
        sp += x[k] * v[k];
        if(sp <= s) {
            if(k == n) {
                if(sp == s) {
                    for(j = 1; j <= n; j++)
                        cout << x[j] << " ";

                    found = true;
                }
            } else
                Back(k + 1 , sp);
        }
        sp -= x[k] * v[k];
    }
}

int main(void)
{
    int i;

    cin >> n >> s;

    for(i = 1; i <= n; i++)
        cin >> v[i];

    Back(1, 0);

    return 0;
}