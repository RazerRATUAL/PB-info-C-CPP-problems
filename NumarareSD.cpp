#include <iostream>
using namespace std;
int SD(int n);

int main()
{
    int n;
    cin >> n;

    int cnt = 0;

    int* a = new int[n];

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = 1; i < n; ++i)
        {
            for(int j = i + 1; j <= n; ++j)
             if(SD(a[i]) == SD(a[j]))
             cnt++;
        }

    cout << cnt;
    delete[] a;     

}

int SD(int n)
{

    int sumdiv = 0;
    for(int d = 1; d <= n; d++) 
    {
        if(n % d == 0) 
        { 
            sumdiv = sumdiv + d;
        }
    }
    return sumdiv;
}