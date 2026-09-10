#include <fstream>
#include <cmath>
using namespace std;
ifstream cin("profu.in");
ofstream cout("profu.out");
int a[500001] , k , n;
int poate(int a[] , int n , long long x , int k);
long long cautarebinara(int a[] , int n , int max , long long x , int k);

int main()
{
    long long x = 0;
    int max = 0;
    cin >> n >> k;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
        x += a[i];
        if(a[i] > max) max = a[i];
    }
    cout << cautarebinara(a , n , max , x , k);
}

int poate(int a[] , int n , long long x , int k)
{
    long long s = 0;
    int c = 1;
    for(int i = 1 ; i <= n ; i++)
    {
        s += a[i];
        if(s > x)
        {
            c++;
            if(c > k) return 0;
            s = a[i];
        }
    }
    if(c <= k) return 1;
    else return 0;
}

long long cautarebinara(int a[] , int n , int max , long long x , int k)
{
    long long st = max , dr = x;
    while(st <= dr)
    {
        long long mij = (st+ dr) / 2;
        if(poate(a , n , mij , k)) dr = mij-1;
        else st = mij+1;
    }
    return st;
}
