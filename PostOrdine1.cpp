#include <fstream>
using namespace std;
ifstream cin("postordine1.in");
ofstream cout("postordine1.out");

struct nod{
    int info;
    nod *st, *dr;
};

void SDR(nod *p);
void Citire(nod * &p);

int main(){
    nod *p = NULL;
    Citire(p);
    SDR(p);
    return 0;
}

void SDR(nod *p){
    if(p)
    {
        SDR(p->st);
        SDR(p->dr);
        cout << p -> info << " ";
    }
}

void Citire(nod * &p){
    int x;
    cin >> x;
    if(x == 0) p = NULL;
    else{
        p = new nod;
        p->info = x;
        Citire(p -> st);
        Citire(p -> dr);
    }
}