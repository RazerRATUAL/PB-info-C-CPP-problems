#include <iostream>
using namespace std;

long long n , m , k;

int main()
{
    cin >> n >> m;
    
    if(m * 2 >= n) cout << 0 << " ";
    else cout << n - 2 * m << " ";

    while(k  * (k - 1) / 2 < m) k++;
    
    cout << n - k;

}