#include <fstream>
#include <algorithm>
#include <vector>
#include <cmath>

using namespace std;
ifstream cin("inaltime1.in");
ofstream cout("inaltime1.out");
int c,x;

void Cit(int nod, int ad)

int main(){
    Cit(1, 0);
    cout << c;
    return 0;
}

void Cit(int nod, int ad){
    c = max(c, ad);
    cin >> x;
    if(x != 0){
        Cit(2 * nod, ad+1);
        Cit(2 * nod + 1, ad+1);
    }
}