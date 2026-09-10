#include <iostream>
#include <cstring>
using namespace std;
char s[21][21], rez[450];
int n,k,i;
int main()
{
    cin >> n;
    for(i = 1; i <= n; i++)
        cin >> s[i];
    cin>>k;
    for(i=1; i<=n; i++)
        if(strlen(s[i])==k)
        {
            strcat(rez,s[i]);
            strcat(rez," ");
        }
    for(i=1; i<=n; i++)
        if(strlen(s[i])!=k)
        {
            strcat(rez,s[i]);
            strcat(rez," ");
        }
    cout<<rez;

    return 0;
}