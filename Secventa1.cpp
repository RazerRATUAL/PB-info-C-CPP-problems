#include <iostream>
using namespace std;

const int dim = 1005;
int a[dim];
int b[dim];
int n, m;
bool sir = true;


int main()
{
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    cin >> m;

    for (int i = 1; i <= m; i++)
        cin >> b[i];


    for (int i = 1; i <= n - m + 1; i++)
    {
        sir = true;

        for (int j = 1; j <= m; j++)
        {
            if (i + j - 1 <= n && a[i + j - 1] != b[j])
            {
                sir = false;
                break;
            }
        }

        if (sir)
        {
            cout << i;
            break;
        }
    }

    if (!sir)
        cout << "NU";


    return 0;
}
