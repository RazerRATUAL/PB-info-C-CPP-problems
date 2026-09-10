#include <iostream>
#include <algorithm>
using namespace std;

const int dim =1001;
void Bubble(int a[], int n);
bool cmmdc(int x, int y);
int a[dim];

int main(){

    int n, l, k = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        cin >> a[i];
    }
    l = a[n];
    for(int i = 1; i < n; i++)
        if(cmmdc(a[i], l) == 1)
            a[++k] = a[i];
    Bubble(a, k);
    for(int i = 1; i <= k; i++)
        cout << a[i] << " ";

    return 0;
}

void Bubble(int a[], int n){
    for(int i = 1; i < n; ++i)
        for(int j = 1; j < n; ++j)
            if(a[j] < a[j+1])
                swap(a[j], a[j+1]);
}

bool cmmdc(int x, int y)
{
    if(x < y)
        swap(x, y);
    while(y)
    {
        int r = x % y;
        x = y;
        y = r;
    }
    if(x == 1)
        return 1;
    else return 0;
}