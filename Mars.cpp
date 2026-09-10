#include <iostream>
using namespace std;

const int Dim = 200002;
int x[Dim];

int main(){
    int n, m, s ,d ,k;
    cin >> n >> m;
    for(int i = 1;i <= m; i++){
        cin >> s >> d >> k;
        x[s] += k;
        x[d+1] -= k;
    }
    for(int i = 1; i <= n; i++)
        cout<<(x[i] += x[i - 1]) << ' ';

    return 0;
}