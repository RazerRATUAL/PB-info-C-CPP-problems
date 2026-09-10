#include <fstream>
#include <cstring>
#include <algorithm>
using namespace std;
ifstream cin("palindrom.in");
ofstream cout("palindrom.out");
char s[260],p[260];
int n,g,k;
int main()
{
    cin>>n;
    cin.get();
    for(int j=1; j<=n; j++)
    {
        cin.getline(s,260);
        g=0;
        k=0;
        for(int i=0; s[i]!='\0'; i++)
            if(s[i]!=' ')
                p[k++]=s[i];
        p[k]=0;
        for(int i=0; i<k/2; i++)
            if(p[k-i-1]!=p[i])
                g=1;
        if(g==0)
            cout<<1<<"\n";
        else
            cout<<0<<"\n";
    }
    return 0;
}