#include <iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int cnt=1, d=2;
    while (n>1){
        int p=0;
        while (n%d==0)
            n/=d, p++;
        cnt*=(p+1);
        d++;
        if (d*d>n)
            d=n;
    }
    if (cnt==2)
        cout<<"DA";
    else
        cout<<"NU";

    return 0;
}