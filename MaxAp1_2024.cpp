#include <iostream>
using namespace std;

int partitionare(int a[], int st, int dr);
void quick(int a[], int st, int dr);

int main(){

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

void quick(int a[], int st, int dr){
    if(st < dr){
        int poz = partitionare(a, st, dr);
        quick(a, st, poz-1);
        quick(a, poz+1, dr);
    }
}
