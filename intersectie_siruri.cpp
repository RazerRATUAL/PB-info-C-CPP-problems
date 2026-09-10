#include<bits/stdc++.h>
using namespace std;
ifstream fin("intersectie.in");
ofstream fout("intersectie.out");
int n, m, x, lc;
int a[100005], b[100005], c[100005];

void citire(int v[], int &lv)
{
    lv=0;
    int x, x1=-1;
    if(!fin.eof())
        fin>>x;
    while((!fin.eof()) && (x!=0))
    {
        if(x!=x1 && x)
            v[++lv]=x;
        x1=x;
        fin>>x;
    }
}

void Intersect(int v1[], int &lv1, int v2[], int lv2, int v3[], int &lv3)
{
    int i=1, j=1;
    lv3=0;
    while( i<=lv1 && j<=lv2)
    {
        if(v1[i]== v2[j])
        {
            v3[++lv3]=v1[i];
            ++i;
            ++j;
        }
        else if(v2[j] < v1[i])
            ++j;
        else
            ++i;
    }
    lv1=lv3;
    for(int i=1; i<=lv3; ++i)
        v1[i]=v3[i];
}

int main()
{
    citire(a, n);
    while(!fin.eof())
    {
        citire(b, m);
        if(n && m)
            Intersect(a, n, b, m, c, lc);
        if(n==0)
        {
            fout<<"nu exista";
            return 0;
        }
    }
    for(int i=1; i<=n; ++i)
        fout<<a[i]<<' ';
    return 0;
}