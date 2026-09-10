#include <iostream>
#include <algorithm>

using namespace std;

const int Dim = 200001;
int a[Dim],rez[Dim], n, T;

int celMaiMareMaiMicSauEgal(int a[], int n, int val);
int celMaiMicMaiMareSauEgal(int a[], int n, int val);
int partitionare(int a[], int st, int dr);
void Quick(int a[], int st, int dr);

int main(){
    cin >> n >> T;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    Quick(a, 1, n);
    int x, y, cnt;
    
    // for (int i = 1; i <= T; ++i)
    // rez[i] = 1;

    for (int i = 1; i <= T; ++i)
    {
        cin >> x >> y;
        int p2 = celMaiMareMaiMicSauEgal(a, n, y);
        int p1 = celMaiMicMaiMareSauEgal(a, n, x);
        if (p1 == -1)
            rez[i] = 0;
        else
            rez[i] = p2 - p1 + 1;
    }
    
    for (int i = 1; i <= T; ++i)
    cout << rez[i] << '\n';

return 0;
}

int celMaiMareMaiMicSauEgal(int a[], int n, int val){
    int st = 1, dr = n, poz = 0;
    while(st <= dr){
        int mij = (st + dr) / 2;
        if(a[mij] <= val){
            poz = mij;
            st = mij + 1;
        }
        else dr = mij - 1;
    }
    return poz;
}

int celMaiMicMaiMareSauEgal(int a[], int n, int val){
    int st = 1, dr = n, poz = 0;
    while(st <= dr){
        int mij = (st + dr) / 2;
        if(a[mij] >= val){
            poz = mij;
            dr = mij - 1;
        }
        else st = mij + 1;
    }
    return poz;
}
int partitionare(int a[], int st, int dr){
    int poz = st;
    for(int i = st; i < dr; ++i)
        if(a[i] < a[dr]){
            swap(a[i], a[poz]);
            poz++;
        }
    swap(a[poz], a[dr]);
    return poz;
}
void Quick(int a[], int st, int dr){
    if(st < dr){
        int poz = partitionare(a, st , dr);
        Quick(a, st, poz - 1);
        Quick(a, poz + 1, dr);
    }
}