#include <iostream>
using namespace std;
void afisare(int x, int y, int k)
{
    int cnt = 0;
    for (int i = x; i <= y; i++)
    {
        cout << i << " ";
        cnt++;
        if (cnt == k)
        {
            cout << "* ";
            cnt = 0;
        }
    }
    if (cnt > 0)
    {
        cout << "*";
    }
    cout << endl;
}

int main()
{
    int x, y, k;
    cin >> x >> y >> k;

    afisare(x, y, k);
    return 0;
}