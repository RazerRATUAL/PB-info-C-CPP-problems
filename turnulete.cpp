#include <iostream>
using namespace std;

const int dim = 100001;

int PA(int a[], int n, int val);
int UA(int a[], int n, int val);
int NA(int a[], int n, int val);
bool BS(int a[], int n, int val);

int a[dim], t[dim];

int main(){
    int n, m;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    cin >> m;
    for (int i = 1; i <= m; ++i)
        cin >> t[i];

    for(int i = 1; i <= m; ++i){
        if(BS(a, n, t[i]))
            cout << 1LL * NA(a, n, t[i]) * t[i] << " ";
        else cout << 0 << " ";
    }

    return 0;
}

bool BS(int a[], int n, int val){
    int st = 1, dr = n;
    while(st <= dr){
        int mij = (st + dr) / 2;
        if(a[mij] == val)
            return true;
        else if(a[mij] < val)
            st= mij + 1;
        else dr = mij - 1;
    }
    return false;
}


int PA(int a[], int n, int val){
    int st = 1, dr = n, poz = -1;
    while(st <= dr){
        int mij = (st + dr) / 2;
        if(a[mij] == val){
            poz = mij;
            dr = mij - 1;
        }
        else if(a[mij] < val)
            st = mij + 1;
        else dr = mij - 1;
    }
    return poz;
}

int UA(int a[], int n, int val){
    int st = 1, dr = n, poz = -1;
    while(st <= dr){
        int mij = (st + dr) / 2;
        if(a[mij] == val){
            poz = mij;
            st = mij + 1;
        }
        else if(a[mij] < val)
            st = mij + 1;
        else dr = mij - 1;
    }
    return poz;
}


int NA(int a[], int n, int val){
    int pa = PA(a, n, val);
    int ua = UA(a, n, val);

    if(pa == -1)
        return 0;
    return ua - pa + 1;
}