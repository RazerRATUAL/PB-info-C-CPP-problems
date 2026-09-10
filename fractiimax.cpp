#include <iostream>

using namespace std;

int cmmdc (int x, int y)
{
    int r=x%y;
    while (r!=0)
    {
        x=y;
        y=r;
        r=x%y;
    }
    return y;
}

int main()
{
    float a,b,c,d;
    cin>>a>>b>>c>>d;
    float fr1=a/b,fr2=c/d;
    if (fr1>fr2) cout<<a/cmmdc(a,b)<<" "<<b/cmmdc(a,b);
    else cout<<c/cmmdc(c,d)<<" "<<d/cmmdc(c,d);
}