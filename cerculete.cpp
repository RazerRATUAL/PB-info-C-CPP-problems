#include <iostream>
using namespace std;

int n, m, x, y;
long long a[100001];

int partitionare(long long a[], int st, int dr){
    int poz = st;
    for(int i = st; i < dr; ++i)
        if(a[i] < a[dr])
            swap(a[poz], a[i]), poz++;
    swap(a[dr], a[poz]);
    return poz;
}

void quickSort(long long a[], int st, int dr){
    if(st < dr){
        int poz = partitionare(a, st, dr);
        quickSort(a, st, poz-1);
        quickSort(a, poz+1, dr);
    }
}

int celMaiMareMaiMicSauEgal(long long a[], int n, long long val){
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

int main() {

    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> x >> y;
        a[i] = 1LL * x * x + 1LL * y * y;
    }

    quickSort(a, 1, n);

    cin >> m;
    for(int i = 1; i <= m; ++i){
        cin >> x;
        cout << celMaiMareMaiMicSauEgal(a, n, 1LL * x * x) << ' ';
    }

    return 0;
}