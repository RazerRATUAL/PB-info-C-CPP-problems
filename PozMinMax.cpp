#include <iostream>
using namespace std;
int main()
{
    int n, x, minim = 1e9, maxim = -1e9,imin,imax;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin >> x;
        if(x < minim)
        {
            minim=x;
            imin = i;
        }
        if(x > maxim)
        {
            maxim = x;
            imax = i;
        }
    }
    cout << imin << " "<< imax;
    return 0;
}
