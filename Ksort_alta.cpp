#include <iostream>
#include <algorithm>
using namespace std;

const int dim = 1001;
int a[dim], v[dim];
void CitesteSir(int &n, int a[]){
    for(int i = 1; i <= n; i++)
        cin >> a[i];
}
void Select(int &n, int a[], int p, int k, int v[]){
        for(int i = 1; i < k ; ++i)
    {
        p = 0;
        for(int j = i ; j < n; j+=k)
        {
            v[p]=a[j];
            p++;
        }
        sort(v , v + p);
        p = 0;
        for(int j = i ; j < n ; j+=k)
        {
            a[j] = v[p];
            p++;
        }
    }
}

int main()
{
    int n ,k , p = 0;
    cin >> n >> k;
    CitesteSir(n, a);
    Select(n, a, p, k, v);
     for(int i = 1; i <= n ; ++i)
        cout << a[i]<<" ";
    return 0;
}