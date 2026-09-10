#include<cstring>
#include<iostream>
using namespace std;
char a[11][1001], aux[1001];
int main()
{
    int n;
    char *p;
    cin >> n;
    cin.get();
    for(int i = 1; i <= n; ++i)
    {
        cin.getline(a[i], 1001);
    }
    bool ok = true;
    while( ok )
    {
        ok = false;
        for(int i = 1; i <= n; ++i)
        {
            if(a[i][0]!=NULL)
            {
                ok = true;
                p = strchr(a[i],' ');
                if(p != NULL)
                {
                    strncpy(aux, a[i], p - a[i]);
                    aux[p-a[i]] = NULL;
                    cout << aux << " ";
                    strcpy(aux, p+1);
                    strcpy(a[i], aux);
                }
                else
                {
                    cout << a[i] <<" ";
                    a[i][0] = NULL;
                }
            }
        }
    }
    return 0;
}