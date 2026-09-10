#include <iostream>
using namespace std;

struct dn{
    int an, luna, zi;
};
int cmp(dn a, dn b){
    if(a.an < b.an)
        return -1;
    if(a.an > b.an)
        return 1;
    if(a.luna < b.luna)
        return -1;
    if(a.luna > b.luna)
        return 1;
    if(a.zi < b.zi)
        return -1;
    if(a.zi > b.zi)
        return 1;
    return 0;
}

void paul(dn & om){
    cin>> om.an >> om.luna >> om.zi;
}

int main(){
    dn om;
    dn batran, tanar;
    int n, indb, indt;
    cin >> n;
    paul(om);
    batran = tanar = om;
    for(int i = 2; i <=n; ++i){
        paul(om);
        if(cmp(om, tanar) < 0)
        {
            tanar = om; 
            indt = i;
        }    
        if(cmp(om, batran) > 0)
        {
            batran = om;
            indb = i;
        }


    }

            cout << indb << " " << indt ;
    
}