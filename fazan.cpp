#include <iostream>
#include <algorithm>

using namespace std;

const int NMAX = 3e1;
int n, m;
string v[NMAX + 1];
string build[NMAX + 1];
bool exista;

void Read(){

    cin >> n >> m;
    for(int i = 1; i <= n; i++)
        cin >> v[i];

}

bool Conditie(string a, string b){
    return(a[a.size() - 2] == b[0] && a[a.size() - 1] == b[1]);
}

bool Ok(int poz){

    for(int i = 1; i < poz; i++)
        if(build[i] == build[poz] || !Conditie(build[i], build[i + 1]))
            return 0;

    return 1;
}

bool solutie(int poz){
    return(poz == m);
}

void print(int poz){

    exista = 1;

    for(int i = 1; i <= poz; i++)
        cout << build[i] << " ";

    cout << "\n";
}

void Back(int poz){


    for(int i = 1; i <= n; i++){

        build[poz] = v[i];
        
        if(Ok(poz)){
            if(solutie(poz))
                print(poz);
            else Back(poz + 1);
        }

    }

}

int main(){

    Read();
    sort(v + 1, v + 1 + n);
    Back(1);
    if(!exista)
        cout << "IMPOSIBIL";

}