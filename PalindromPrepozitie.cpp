#include <bits/stdc++.h>
using namespace std;

ifstream cin("palindrom.in");
ofstream cout("palindrom.out");

int main()
{
    int n;
    cin >> n;
    cin.get();
    for(int i = 0 ; i < n ; ++i)
    {
        char a[300];
        cin.getline(a , 300);
        int utim=0;
        int j = 0;
        while(a[j]!='\0')
        {
            while(a[j]==' ')
            {
                int k = j;
                while(a[k]!='\0')
                {
                    a[k]=a[k+1];
                    k++;
                }
            }
            utim=j;
            j++;
        }
        j = 0;
        bool ok=true;
        while(a[j]!='\0')
        {
            if(a[j]!=a[utim-j])
            {
                ok=false;
            }
            j++;
        }
        if(ok)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}