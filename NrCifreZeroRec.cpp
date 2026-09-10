#include <iostream>
using namespace std;

int nr_cif_zero(int n, int cnt);

int main()
{
    int n, cnt = 0;
    cin >> n;
    cout << nr_cif_zero(n, cnt);
}

int nr_cif_zero(int n, int cnt)
{
    if(n == 0 && cnt == 0)
        return 1;
    else if(n == 0)
        return 0;
    else
    {
        cnt++;
        if(n % 10 == 0)
            return nr_cif_zero(n / 10, cnt) + 1;
        else
            return nr_cif_zero(n / 10, cnt);
    }
}
