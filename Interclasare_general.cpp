#include <iostream>
using namespace std;

// Interclasare

/*
 *  Operatii pe multimi matematice:
 *  1) Reuniunea
 *      A U B
 *  2) Intersectia
 *      A n B
 *  3) Diferenta
 *      A / B
 *  4) Diferenta Simetrica
 *      (A / B) U (B / A)
 *
 *  Proprietatile Multimilor Matematice:
 *  1) Elementele sunt ordonate
 *  2) Elementele sunt unice
 */

void reuniune(int a[], int n, int b[], int m, int c[], int &indc){
    indc = 0;
    int inda = 1, indb = 1;
    while(inda <= n && indb <= m){
        if(a[inda] < b[indb])
            c[++indc] = a[inda++];
        else if(a[inda] > b[indb])
            c[++indc] = b[indb++];
        else c[++indc] = a[inda++], indb++;
    }
    while(inda <= n)
        c[++indc] = a[inda++];
    while(indb <= m)
        c[++indc] = b[indb++];
}

void intersectie(int a[], int n, int b[], int m, int c[], int &indc){
    indc = 0;
    int inda = 1, indb = 1;
    while(inda <= n && indb <= m){
        if(a[inda] < b[indb])
            inda++;
        else if(b[indb] < a[inda])
            indb++;
        else c[++indc] = a[inda++], indb++;
    }
}

void diferenta(int a[], int n, int b[], int m, int c[], int &indc){
    indc = 0;
    int inda = 1, indb = 1;
    while(inda <= n && indb <= m){
        if(a[inda] < b[indb])
            c[++indc] = a[inda++];
        else if(b[indb] < a[inda])
            indb++;
        else inda++, indb++;
    }
    while(inda <= n)
        c[++indc] = a[inda++];
}

void diferenta_simetrica(int a[], int n, int b[], int m, int c[], int &indc){
    indc = 0;
    int inda = 1, indb = 1;
    while(inda <= n && indb <= m){
        if(a[inda] < b[indb])
            c[++indc] = a[inda++];
        else if(b[indb] < a[inda])
            c[++indc] = b[indb++];
        else inda++, indb++;
    }
    while(inda <= n)
        c[++indc] = a[inda++];
    while(indb <= m)
        c[++indc] = b[indb++];
}

int main(){

    int n, a[10001], b[10001], m, c[20001], k;
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
        cin >> a[i];
    for(int i = 1; i <= m; ++i)
        cin >> b[i];



    for(int i = 1; i <= k; ++i)
        cout << c[i] << ' ';

    return 0;
}