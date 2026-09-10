#include <fstream>

using namespace std;

ifstream cin("nivelebin.in");
ofstream cout("nivelebin.out");

int n , St[1001] , Dr[1001] , val[1001] , T[1001] , nivel[1001] , maxi , cnt;

void RSD(int p)
{
    if(p > 0)
    {
        cnt++;
        nivel[p] = cnt;
        RSD(St[p]);
        RSD(Dr[p]);
        cnt--;
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
    int rez;
    for(int i = 1 ; i <= n ; i++)
        if(!T[i]) rez = i;
    RSD(rez);

    for(int i = 1 ; i <= n ; i++)
        if(nivel[i] > maxi) maxi = nivel[i];
      cout << maxi << endl;
    for(int i = 1 ; i <= maxi ; i++)
    {
        int cnt = 0;
        for(int j = 1 ; j <= n ; j++)
            if(nivel[j] == i) cnt++;
            cout << cnt << " ";
    }

}