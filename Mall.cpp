#include <iostream>
#include <vector>

using namespace std;

#define NMAX 101

int n, m;
vector <int> adia[NMAX];

void Dfs(int nod, int vizitat[]);


int main() {

    cin >> n >> m;
    for (int a, b, i = 1; i <= m; ++ i) {
        cin >> a >> b;
        adia[b].push_back(a);
    }

    int rez;
    bool gasit = false;
    for (int i = 1; i <= n && !gasit; ++ i) {
        int vizitat[NMAX] = {0};
        Dfs(i, vizitat);

        int cnt = 0;
        for (int j = 1; j <= n; ++ j)
            if (vizitat[j])
                cnt ++;

        if (cnt == n)
            gasit = true, rez = i;

    }

    if (!gasit)
        cout << "NU EXISTA";
    else
        cout << rez;

    return 0;
}

void Dfs(int nod, int vizitat[]) {

    vizitat[nod] = 1;
    for (auto elem : adia[nod])
        if (!vizitat[elem])
            Dfs(elem, vizitat);
}
