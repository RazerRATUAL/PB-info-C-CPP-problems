#include <iostream>
using namespace std;
int main()
{
    long long n , k;
    cin >> n >> k;
    long long copie = n , sum = 0 , cnt = 0;
    while(copie != 0)
    {
        cnt++;
        sum += copie % 10;
        copie /= 10;
    }
    if(cnt >= 3)
    {
        long long r1 = (sum * k) % 9;
        long long r2 = (n % 1000) % 8;
        long long q = (9 * r2 - 8 * r1 + 72) % 72;
        cout << q;

    }
    else if(cnt == 2)
    {
        if(k >= 2)
        {
        long long rez = n * 100 + n;
        if(rez * k < 72) cout << rez * k;
        else {
        long long r1 = (sum * k) % 9;
        long long r2 = (rez % 1000) % 8;
        long long q = (9 * r2 - 8 * r1 + 72) % 72;
        cout << q;
        }
        }
        else if(k == 1)
        {
            cout << (n + 72) % 72;
        }
    }
    else if(cnt == 1)
    {
        if(k >= 3)
        {
        long long rez = (n * 10 + n) * 10 + n;
        if(rez * k < 72) cout << rez * k;
        else {
        long long r1 = (sum * k) % 9;
        long long r2 = (rez % 1000) % 8;
        long long q = (9 * r2 - 8 * r1 + 72) % 72;
        cout << q;
        }
        }
        else if(k == 1) cout << n;
        else if(k == 2)
        {
            long long rez = n * 10 + n;
            if(rez < 72) cout << rez;
            else cout << rez % 72;
        }
    }
}
