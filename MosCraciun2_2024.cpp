#include <iostream>
using namespace std;

int a[100001], n, m, cnt, s;

struct mag {
    int p; 
    int c;
};

mag m[101];

int partitionare(mag a[], int st, int dr) {
    int poz = st;
    for(int i = st; i < dr; ++i)
        if(a[i].p < a[dr].p) {
            swap(a[i], a[poz]);
            poz++;
        }
    swap(a[poz], a[dr]);
    return poz;
}

void quickSort(mag a[], int st, int dr) {
    if(st < dr) {
        int poz = partitionare(a, st, dr);
        quickSort(a, st, poz-1);
        quickSort(a, poz+1, dr);
    }
}

int main() {
    cin >> n >> m;
    for(int i =  0; i < m; i++) {
        cin >> m[i].p >> m[i].c;
        cnt += m[i].c;
    }

    if(n > cnt)
        cout << "imposibil";
    else{
        quickSort(m, 0, m - 1);
        for(int i = 0; i < m && n > 0; ++i) {
            s += m[i].p * m[i].c;
            n -= m[i].c;
        }
        cout << s << endl;
    }

    return 0;
}
