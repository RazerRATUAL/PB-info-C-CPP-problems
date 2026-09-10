#include <iostream>
#include <algorithm>
using namespace std;
void CitesteSir(int &n, int a[]){
    for(int i = 1; i <= n; i++)
        cin >> a[i];
}
void Selection(int &imax, int &imin, int a[]){
for(int i = imin; i < imax; ++i)
    for(int j = i + 1; j <= imax; ++j){
         if(a[i] > a[j])
            swap(a[i], a[j]);
    }
}
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1001];
    int min = 1000001, max = 0, imin, imax;
    CitesteSir(n, a);
    
    for(int i = 1; i <= n; ++i)
    {
        if(a[i] < min)
            min = a[i], imin = i;
        if(a[i] > max)
            max = a[i], imax = i;
    }
    if(imin > imax) swap(imin, imax);

    Selection(imax, imin, a);

    for(int i = 1; i <= n; ++i)
        cout << a[i] << " ";
    return 0;
}