#include <iostream>
using namespace std;
int Dim = 201;
int multiplu(int n, int k)
{
    int r = n % k;
    if(r <= k / 2) return n - r;
    else return n + k - r;
}

int main()
{
    int k , n , a[Dim] , v[Dim];
    cin >> k >> n;
    for(int i = 0 ; i < n; ++i)
    {
        cin >> a[i];
        v[i] = multiplu(a[i],k);
    }
    for(int i = n - 1 ; i >= 0 ; --i)
    {
        cout << v[i] << ' ';
    }
}
