#include <iostream>
using namespace std;

int m[21][21];
int main(){
    int n, cnt = 0;
    cin >> n;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
        cin >> m[i][j];
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
        if(m[i][j] > m[i - 1][j] && m[i][j] > m[i + 1][j] && m[i][j] > m[i][j - 1] && m[i][j] > m[i][j + 1])
            cnt+= 1;

    cout << cnt;
}