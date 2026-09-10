#include <iostream>
using namespace std;
void afisvec(int a[] , int n);
int a[100];

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];

    afisvec(a, n);
}

void afisvec(int a[] , int n)
{
    if(n > 0)
    {
        cout << a[n-1] << ' ';
        afisvec(a,n-1);
    }
}
