#include <iostream>
using namespace std;
int main()
{
    int n, a[1005];
    cin >> n;
    for(int i = 1; i <= n ;++i)
        cin >> a[i];
    for(int  i = 2 ; i <= n ; i += 2)
        cout << a[i] << " ";
        cout << endl;
    if(n % 2 == 0)
        n--;
    for(int i = n ; i > 0 ; i -= 2)
        cout << a[i] << " ";
    return 0;
}
