#include <iostream>
using namespace std;
void mergeSort(int a[], int st, int dr);

int c[100001];

int main(){
    int a[100001], n;
    cin >> n;
    
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    mergeSort(a, 1, n);
    for(int i = 1; i <= n; ++i)
        cout << a[i] << ' ';
    return 0;
}

void mergeSort(int a[], int st, int dr){
    if(st < dr){
        int mij = (st + dr) / 2;
        mergeSort(a, st, mij);
        mergeSort(a, mij+1, dr);
        int ind1 = st, ind2 = mij+1, indc = 0;
        while(ind1 <= mij && ind2 <= dr){
            if(a[ind1] < a[ind2])
                c[++indc] = a[ind1++];
            else c[++indc] = a[ind2++];
        }
        while(ind1 <= mij)
            c[++indc] = a[ind1++];
        while(ind2 <= dr)
            c[++indc] = a[ind2++];
        for(int i = 1; i <= indc; ++i)
            a[st + i - 1] = c[i];
    }
}