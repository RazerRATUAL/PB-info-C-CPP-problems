#include <iostream>
using namespace std;

int cifminpar(int n);

int main()
{
    int n;
    cin >> n;
    cout << cifminpar(n);
}

int cifminpar(int n)
{
    int min = 10,cnt = 0;
    while (n)
    {
        if ((n % 10) % 2 == 0)
            if (n % 10 < min)
            min = n % 10, cnt++;
        n /= 10;
    }
    if (cnt != 0)
        return min;
    else
        return -1;
}
