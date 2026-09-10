#include <iostream>
using namespace std;

int partitionare(int a[], int st, int dr);
void quickSort(int a[], int st, int dr);

int main(){

    int a[100001], n;
    cin >> n;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];

    quickSort(a, 1, n);

    for(int i = 1; i <= n; ++i)
        cout << a[i] << ' ';

    return 0;
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

void quickSort(int a[], int st, int dr){
    if(st < dr){
        int poz = partitionare(a, st, dr);
        quickSort(a, st, poz-1);
        quickSort(a, poz+1, dr);
    }
}

