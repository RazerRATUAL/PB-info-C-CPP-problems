#include <iostream>
using namespace std;

const int Dim = 26;
int a[Dim];

int main(){
    int n, p, x;
    cin >> n >> x >> p;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    n += 1;
    for(int i = n; i > p; --i)
        a[i] = a[i - 1];
        a[p] = x;

    for(int i = 1; i <= n; ++i)
        cout << a[i] << " ";


    return 0;
}
