#include <iostream>
using namespace std;
int main()
{
    int n, cate = 0, a[1001], maxim = -1, minim = 10000000;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if(a[i] > maxim)
            maxim = a[i];
        if(a[i] < minim)
            minim = a[i];
    }
    int nr = maxim - minim;

    for(int i = 1;i <= n; i++)
    {
        if(a[i] == nr)
            cate++;
    }
    cout << cate;
    return 0;
}
