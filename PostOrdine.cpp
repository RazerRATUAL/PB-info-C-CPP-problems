#include <fstream>
using namespace std;

ifstream cin("postordine.in");
ofstream cout("postordine.out");

int n , St[1001] , Dr[1001] , val[1001] , T[1001];

void SDR(int p);
void RSD(int p);
void SRD(int p);

 int main(){
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
        cin >> val[i] >> St[i] >> Dr[i];
        T[St[i]] = i;
        T[Dr[i]] = i;
    }
    int aux = 1 , rez;
    while(aux > 0){
        if(rez != 0) rez = aux;
        aux = T[aux];
    }
    SDR(rez);
}

void SDR(int p){
    if(p>0){
        SDR(St[p]);
        SDR(Dr[p]);
        cout << val[p] << ' ';
    }
}

void RSD(int p){
    if(p>0){
        cout << val[p] << ' ';
        RSD(St[p]);
        RSD(Dr[p]);
    }
}

void SRD(int p){
    if(p>0){
        SRD(St[p]);
        cout << val[p] << ' ';
        SRD(Dr[p]);
    }
}
