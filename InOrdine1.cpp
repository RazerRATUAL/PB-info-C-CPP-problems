#include <fstream>
#include <vector>

using namespace std;

ifstream cin("inordine1.in");
ofstream cout("inordine1.out");

struct nod{
    int info;
    nod *st, *dr;
};

void RSD(nod *p);
void Citire(nod * &p);

int main(){
    nod *p = NULL;
    Citire(p);
    RSD(p);
    return 0;
}

void RSD(nod *p){
    if(p){
        RSD(p->st);
        cout << p -> info << " ";
        RSD(p->dr);
    }
}

void Citire(nod * &p){
    int x;
    cin >> x;
    if(x == 0) p = NULL;
    else
    {
        p = new nod;
        p->info = x;
        Citire(p -> st);
        Citire(p -> dr);
    }
}
