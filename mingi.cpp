#include <iostream>
using namespace std;

int n,x,m;
int sp[100005];

int main(){

    cin >> n;
    for(int i = 1 ; i <= n ; ++i){
        cin >> x;
        sp[i] = sp[i - 1] + x;
    }

    cin >> m;
    for(int i = 1 ; i <= m ; ++i){
        cin >> x;

        int st = 1,dr = n;
        int poz = n + 1;

        while(st <= dr){

            int mij = (st + dr) / 2;
            if(sp[mij] >= x){
                poz = mij;
                dr = mij - 1;
            }
            else
                st = mij + 1;
        }
        cout << poz << ' ';
    }
    
    


    return 0;
}