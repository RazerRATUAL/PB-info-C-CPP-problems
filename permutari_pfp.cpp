#include <iostream>
using namespace std;

int n, x[11], P[11];

void afis(){
    for(int i = 1; i<= n; ++i)
        if(i % 2 == 0){
            if(x[i] != i)
        return;
        }
        
    for(int i = 1; i <= n; ++i)
        cout << x[i] << ' ';
    cout << '\n';
}

void back(int poz){
    for(int i = 1; i <= n; ++i){
        if(!P[i]) {
            x[poz] = i;
            P[i] = 1;
            if (poz == n)
                afis();
            else back(poz + 1);
            P[i] = 0; // !
        }
    }
}

int main(){

    cin >> n;

    back(1);

    return 0;
}