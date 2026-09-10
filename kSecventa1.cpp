#include <iostream>
using namespace std;

const int Dim = 1001;
int a[Dim], n, k;
int v[Dim];

int main(){
cin >> n >> k;

for (int i = 0; i < n; ++i)
    cin >> a[i];

int st1 = 0, st2 = 0;

for (int i = 0; i <= n - k; ++i){
    int p = 0;
    for (int j = i; j < i + k; ++j){
        v[p] = a[j];
        p++;
    }

for (int j = i + 1; j < n - k; ++j){
        p = 0;
        int cnt = 0;
        for (int m = j; m < j + k; ++m)
        {
            if (a[m] == v[p])
            {
                cnt++;
                p++;
            }
        }
        if (cnt == k && st1 == 0 && st2 == 0){
            st1 = i + 1;
            st2 = j + 1;
        }
    }
}

if (st1 == 0 && st2 == 0)
    cout << "NU";
    else
        cout << st1 << ' ' << st2;

    return 0;
}