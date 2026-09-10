#include <fstream>

using namespace std;

ifstream cin("suma35.in");
ofstream cout("suma35.out");

int n, x[1001];

void afisare(int k)
{
    for (int i = 1; i <= k; i++)
        cout << x[i] << ' ';
    cout << '\n';
}
void backtracking(int k, int sum)
{
    for (int i = x[k - 1]; i <= 5; i += 2)
    {
        x[k] = i;
        sum += x[k];
        if (sum <= n)
            if (sum == n)
                afisare(k);
            else
                backtracking(k + 1, sum);
        sum -= x[k];
    }
}

int main()
{
    cin >> n;
    x[0] = 3;
    backtracking(1, 0);
    return 0;
}