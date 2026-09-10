#include <iostream>
using namespace std;
int main()
{
    int n, a[1001];
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> a[i];
    for(int i = 1; i <= n; i++)
    {
        if(a[i] % a[n] == 0)
            cout << a[i]<< " ";
    }
    return 0;
}
