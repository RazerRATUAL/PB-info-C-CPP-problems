#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<set<int>> v(21);
int n, m, k;
bool exista = false;
int sol[21];

void printSol() {
    for(int i = 0; i <= k; i++)
        cout << sol[i] << " ";
    cout << endl;
}

void backtracking(int pozCurenta, int ultimulNod) {
    if(pozCurenta == k + 1) {
        exista = true;
        printSol();
    } else {
        for(int urmatorulNod : v[ultimulNod]) {
            bool ok = true;
            for(int i = 0; i < pozCurenta - 1 && ok; i++)
                if(sol[i] == ultimulNod && sol[i+1] == urmatorulNod)
                    ok = false;
            if(!ok)
                continue;
            sol[pozCurenta] = urmatorulNod;
            backtracking(pozCurenta + 1, urmatorulNod);
        }
    }
}

int main() {
    cin >> n >> m >> k;
    for(int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;
        v[a].insert(b); 
    }
    for(int i = 1; i <= n; i++) {
        sol[0] = i;
        backtracking(1, i);
    }
    if(!exista) 
        cout << "Nu exista";
}