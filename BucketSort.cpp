#include <iostream>
using namespace std;

int partitionare_C(int a[], int st, int dr){
    int poz = st;
        for(int i = st; i < dr; ++i)
    if(a[i] < a[dr]){
        swap(a[i], a[poz]);
        poz++;
    }
    swap(a[poz], a[dr]);
return poz;
}

int partitionare_D(int a[], int st, int dr){
    int poz = st;
        for(int i = st; i < dr; ++i)
    if(a[i] > a[dr]){
        swap(a[i], a[poz]);
        poz++;
    }
    swap(a[poz], a[dr]);
return poz;
}

void quickSort_C(int a[], int st, int dr){
    if(st < dr){
    int poz = partitionare_C(a, st, dr);
    quickSort_C(a, st, poz-1);
    quickSort_C(a, poz+1, dr);
  }
}

void quickSort_D(int a[], int st, int dr){
    if(st < dr){
    int poz = partitionare_D(a, st, dr);
    quickSort_D(a, st, poz-1);
    quickSort_D(a, poz+1, dr);
  }
}

int main(){

int a[200005], n, k, d;
cin >> n;
for(int i = 1; i <= n; ++i)
    cin >> a[i];

cin >> d;
if(d == 0)
quickSort_C(a, 1, n);
else
quickSort_D(a, 1, n);

for(int i = 1; i <= n; ++i)
    cout << a[i] << ' ';

return 0;
}