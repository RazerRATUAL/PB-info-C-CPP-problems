#include <iostream>
using namespace std;

struct Copil {
    int h, ord;
    bool operator < (Copil const& c) const noexcept
    {
        return h < c.h;
    }
};

const int dim = 100001;
Copil a[dim], h[dim];
int partitionare(Copil a[], int st, int dr){
    int poz = st;
    for(int i = st; i < dr; ++i)
    if(a[i] < a[dr]){
        swap(a[i], a[poz]);
        poz++;
    }
    swap(a[poz], a[dr]);
    return poz;
}

void quickSort(Copil a[], int st, int dr){
    if(st < dr){
        int poz = partitionare(a, st, dr);
        quickSort(a, st, poz-1);
        quickSort(a, poz+1, dr);
    }
}

int main(){
int n, ind = 1;
cin >> n;
for(int i = 1; i <= n; ++i){
    cin >> a[i].h;
}

for(int i = 1; i <= n; ++i)
    a[i].ord = i;

quickSort(a, 1, n);

for(int i = 1; i <= n; ++i)
    cout << a[i].ord << ' ';

return 0;
}
