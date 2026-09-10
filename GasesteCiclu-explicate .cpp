/*

Pirnog Theodor Ioan
CNBPH Buzau

*/

#include <iostream>
#include <vector>
 
using namespace std;
 
const int NMAX = 1e2;
 
vector <int> g[NMAX + 1], sol;
bool vizitat[NMAX + 1], dc[NMAX + 1], found;
int last[NMAX + 1];
 
void drum(int x, int stop, int lungime){
 
    // "stop" = nodul cu care incepe ciclul
    // "lungime" = lungimea traseului ce-mi construieste ciclul
 
    // nodul curent este acelasi cu nodul cu care incepe ciclul => trebuie sa ma opresc
    if(x == stop && lungime != 0){
 
        cout << x << " ";
        return;
 
    }
 
    drum(last[x], stop, lungime + 1);
    cout << x << " ";
 
}
 
void dfs(int x, int anterior){
 
    // "anterior" = nodul din care ajung in nodul x
 
    vizitat[x] = 1; // marchez ca am vizitat nodul x
    dc[x] = 1; // marchez ca nodul x se afla pe drumul curent
 
    for(auto y : g[x]){
 
        if(found == 1) // am gasit un ciclu, deci voi opri functia
            return;
 
        // ne uitam in vecinii nodului curent, adica x
 
        if(dc[y] == 0){
 
            // nodul y nu se afla pe drumul meu curent
 
            last[y] = x; // nodul anterior (din drumul curent) al vecinilui lui x (=y) este x
            dfs(y, x); // deoarece din nodul x merg in nodul y, nodul x devine nod anterior pentru y!!!!!
 
        }else if(dc[y] == 1 && anterior != y){
 
            // nodul y SE AFLA pe drumul meu curent, deci, exista un ciclu care pleaca din nodul y, traverseaza noduri notate cu "1" din
            // vectorul "dc" si ajunge tot in y
 
            found = 1; // am gasit un ciclu
 
            last[y] = x; // nodul anterior (din drumul curent) al vecinilui lui x (=y) este x
            drum(y, y, 0); // reconstruiesc ciclul ce ma duce din nodul y in nodul y
 
        }
 
    }
 
    dc[x] = 0; // dupa ce am vizitat toate nodurile vecine cu x si ma intorc din recursie, nodul x nu o sa mai faca parte
    // din drumul curent
 
}
 
int main(){
 
    int n = 0, m = 0;
    cin >> n >> m;
 
    for(int i = 0; i < m; i++){
 
        int x = 0, y = 0;
        cin >> x >> y;
 
        g[x].push_back(y);
        g[y].push_back(x);
 
    }
 
    for(int i = 1; i <= n; i++){
        if(vizitat[i] == 0){
 
            // nu am vizitat nodul i => voi face DFS in el
            dfs(i, 0);
 
            if(found == 1) // am gasit un ciclu
                break; // oprim for-ul
 
        }
    }
 
    if(found == 0){
 
        // nu am gasit niciun ciclu
 
        cout << "IMPOSSIBLE";
        return 0; // oprim programul
 
    }
 
 
 
    return 0;
}