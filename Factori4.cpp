#include <iostream>
#include <algorithm>
using namespace std;

int nr_div(int n);
int a[1001];
int main()
{
    int n;
    cin>>n;

    for(int i = 0; i < n; ++i)
        cin>> a[i];
    sort(a, a + n);
    for(int i = 0; i < n; ++i)
        if(nr_div(a[i]) == 1)
        {
            cout<< a[i];
            return 0;
        }
    cout<<"NU EXISTA";
    return 0;
}

int nr_div(int n){
    int p = 0;
    if(n % 2 == 0){
        ++p;
        while(n % 2 == 0)
            n /= 2;
     }
    int d = 3;
    while(n > 1){
        if(n % d == 0){
            ++p;
            if(p > 1)
                return 2;
            while(n % d == 0)
                n /= d;
        }
        else
            d += 2;
    }
    if(n > 1 && d * d > n)
        ++p;
    return p;
 }