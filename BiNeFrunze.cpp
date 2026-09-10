#include <fstream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
ifstream cin("binefrunze1.in");
ofstream cout("binefrunze1.out");
int n, rez[50001], c, v[200001], cc;
bool ok = false;
void citire(int nod, int val){
    int x;
    cin >> x;
    v[++cc] = x;
    if(nod % 2 == 0){
        if(x == 0)
            ok = true;
        else
            ok = false;
    }
    else{
        if(x == 0 && ok){
            ok = false;
            rez[++c] = val;
        }
        else{
            ok = false;
        }
    }
    if(x){
        citire(nod * 2, x);
        citire(nod * 2 + 1, x);
    }
}
int main(){
    citire(1, 0);
    sort(rez + 1, rez + c + 1);
    sort(v + 1, v + cc + 1);
    int j = c;
    for(int i = cc; i >= 1; --i){
        if(v[i] != rez[j] && v[i] != 0)
            cout << v[i] << ' ';
        else if(v[i] != 0)
            j--;
    }
    return 0;
}