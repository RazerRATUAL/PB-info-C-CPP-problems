#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s[300];
    cin.getline(s , 300);
    int i = 0;
    int st = 0;
    while(s[i]==' ')
        i++;
    st = i;
    i = 0;
    char lch;
    int l = 1;
    int lmax = 1;
    int cnt = 0;
    while(s[i])
    {
        if(s[i]!=' ' && s[i+1]==' ')
            lch = s[i];
        if(s[i-1]==' ' && s[i]!=' ')
        {
            if(s[i] == lch)
                l++;
            else
            {
                if(l > lmax)
                {
                    lmax=l;
                }
                l = 1;
            }
        }
        i++;
    }
    i = 0;
    if(l > lmax)
        lmax=l;
    l = 1;
    if(lmax != 1)
    {
    while(s[i])
    {
        if(s[i]!=' ' && s[i+1]==' ')
            lch = s[i];
        if(s[i-1]==' ' && s[i]!=' ')
        {
            if(s[i] == lch)
                l++;
            else
            {
                if(l == lmax)
                {
                    cnt++;
                    int j = st;
                    while(j != i)
                        cout << s[j] , j++;
                    cout<< endl;
                }
                l = 1;
                st = i;
            }
        }
        i++;
    }
    if(l == lmax)
                {
                    int j = st;
                    while(j != i)
                        cout << s[j] , j++;
                    cout<< endl;
                }
}
    else
        cout << -1;
    return 0;
}