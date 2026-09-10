#include <fstream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
ifstream cin("biarbore.in");
ofstream cout("biarbore.out");
vector <int> a;
int x , nod , rez1 , rez2;
void citire(int t)
{
    int tnod = nod;
    cin >> x;
    a[nod++] = x;
    a.push_back(0);
    if(x != 0)
    {
        if(t == 0) rez1 = nod;
        citire(tnod);
        if(t == 0) rez2 = nod;
        citire(tnod);
    }
}
int main()
{
    a.push_back(0);
    a.push_back(0);
    nod = 1;
    citire(0);
    cout << a[rez1] << " " << a[rez2];
}