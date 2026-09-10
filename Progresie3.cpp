#include <fstream>
using namespace std;

ifstream cin("progresie3.in");
ofstream cout("progresie3.out");

// progresie3

bool C[1001];
int a[1001], n;

int main() {

    int x;
    while(cin >> x)
        C[x] = 1;

    for(int i = 0; i <= 1000; ++i)
        if(C[i])
            a[++n] = i;

    int r = a[2] - a[1];
    bool ok = true;
    for(int i = 2; i < n; ++i)
        if(a[i+1] - a[i] != r)
            ok = false;

    if(ok)
        cout << r;
    else cout << "NU";

    return 0;
}