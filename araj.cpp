#include <iostream>
using namespace std;
int n, b, k, x[11], P[11];

void afis(){
    for(int i = 1; i <= k; ++i)
        cout << x[i] << ' ';
    cout << '\n';
}

void back(int poz){
    for(int i = 4; i <= b; ++i){
        if(!P[i]) {
            x[poz] = i;
            P[i] = 1;
            if (poz == k)
                afis();
            else back(poz + 1);
            P[i] = 0; 
        }
    }
}

int main(){

    cin >> n >> b >> k;

    back(1);

    return 0;
}