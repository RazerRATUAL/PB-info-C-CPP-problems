#include <fstream>

using namespace std;

ifstream cin("partitiinumar1.in");
ofstream cout("partitiinumar1.out");

int n, x[41];

void Afisare(int k)
{
    for (int i = 1; i <= k; i++)
        cout << x[i] << ' ';
    cout << '\n';
}

bool Ok(int k) {
    for (int i = 1; i < k; ++i)
        if (x[k] == x[i])
            return false;
    return true;
}

void Partitii(int k, int sum)
{
    for (int i = x[k - 1]; i <= n; i++)
    {
        x[k] = i;
        if (Ok(k)) {
            sum += x[k];
            if (sum <= n)
                if (sum == n)
                    Afisare(k);
                else
                    Partitii(k + 1, sum);
            sum -= x[k];
        }
    }
}




int main()
{
    cin >> n;
    x[0] = 1;
    Partitii(1, 0);
    return 0;
}