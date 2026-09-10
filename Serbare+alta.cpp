#include <fstream>

using namespace std;

ifstream cin("serbare.in");
ofstream cout("serbare.out");

struct uniforma
{
    int copii;
    int tip;
}c[1005],paul[12];


int main()
{
    int n, p;
    cin >> n >>p;

    for (int i = 1; i <= n; i++)
    {
        cin>> c[i].copii>> c[i].tip;
        int t = c[i].tip;
        paul[t].copii += c[i].copii;
        paul[t].tip = t;
    }

    for (int i = 1; i <= p; i++)
    {
        for (int j = 1; j <= p; j++)
            if (paul[i].copii > paul[j].copii) 
                swap(paul[i],paul[j]);
    }

    for (int i = 1; i <= p; i++)
        cout<<paul[i].tip<<" ";

    return 0;
}