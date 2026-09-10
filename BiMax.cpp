#include <fstream>
using namespace std;

ifstream cin("bimax.in");
ofstream cout("bimax.out");

int maxi;

void Citire(int nod);

int main(){
    int x;
    cin >> x;
    Citire(2);
    int s = maxi;
    maxi = 0;
    Citire(3);
    int s1 = maxi;
    cout << s << ' ' << s1;
    return 0;
}

void Citire(int nod){
    int x;
    cin >> x;
    if(x > maxi)
        maxi = x;
    if(x != 0){
        Citire(2 * nod);
        Citire(2 * nod + 1);
    }
}