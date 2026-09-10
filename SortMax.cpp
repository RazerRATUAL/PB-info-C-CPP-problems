#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1001];
    int max=0;
    int inf=0;
    for(int i = 0 ; i < n ; ++i)
    {
        cin >> a[i];
        if(a[i]>max)
        max=a[i] , inf=i;
    }
    sort(a , a+inf);
    for(int i = 0 ; i < inf ; ++i)
    cout << a[i] << ' ';
    sort(a+inf , a+n);
    for(int i = n-1 ; i >= inf ; --i)
    cout << a[i] << ' ';
}
