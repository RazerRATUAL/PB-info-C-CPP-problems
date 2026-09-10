#include <bits/stdc++.h>

using namespace std;

ifstream cin("difsub.in");
ofstream cout("difsub.out");

int n , St[1001] , Dr[1001] , val[1001] , T[1001] , ok , sums , sumd;

void RSD(int p , int z)
{
    if(p > 0)
    {
        if(Dr[z] != p && ok == 0) sums += val[p];
        else if(Dr[z] == p) sumd += val[p] , ok++;
        else if(Dr[z] != p && ok != 0) sumd += val[p];
        RSD(St[p] , z);
        RSD(Dr[p] , z);
    }
}

 int main()
{
    cin >> n;
    for(int i = 1 ; i <= n ; i++)
    {
        cin >> val[i] >> St[i] >> Dr[i];
        T[St[i]] = i;
        T[Dr[i]] = i;
    }

    int aux = 1 , rez;
    while(aux > 0)
    {
        if(rez != 0) rez = aux;
        aux = T[aux];
    }
    RSD(rez , rez);
    cout << abs(sums - val[rez] - sumd);
}