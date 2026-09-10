#include <iostream>
using namespace std;
int prim (int n)
{
    if (n == 0 || n == 1)
        return 0;
    if ( n == 2)
        return 1;
    if ( n % 2 == 0)
        return 0;
    for (int i = 3; i * i <= n;i += 2)
        if(n % i == 0)
        return 0;
    return 1;
}
int main()
{
    long long n, x, s = 0;
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        cin >> x;
        int ogl = 0;
        int aux = x;
        while(x != 0)
        {
            ogl = ogl*10 + x%10;
            x /= 10;
        }
        if (prim(ogl))
            s=s+aux;
    }
    cout << s;
    return 0;
}
