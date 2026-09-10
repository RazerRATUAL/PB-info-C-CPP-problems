#include <fstream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
ifstream cin("nrnod.in");
ofstream cout("nrnod.out");
int n, c;
bool ok = false;
void citire(int nod, int val){
    int x;
    cin >> x;
    if(nod % 2 == 0){
        if(x == 0)
            ok = true;
        else
            ok = false;
    }
    else{
        if((x != 0 && ok) || (x==0 && !ok)){
            ok = false;
            c++;
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
    cout << c;
    return 0;
}