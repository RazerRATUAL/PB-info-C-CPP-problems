#include<iostream>
#include<fstream>
#include<cstring>
#include<algorithm>

using namespace std;
int  v[1001], st[1010], n ,cnt ,uz[101],maxi;
char s[50][50],rez[50][50];
void afis(int k) {
    cnt = 1;
    for (int i = 1; i <= k; i++) cout<< s[st[i]]<<" ";
}
int verificare(int k) {
    int x = st[k], y = st[k - 1];
    if (s[x][1] != s[y][strlen(s[y]) - 1]) return 0;
    if (s[x][0] != s[y][strlen(s[y]) - 2]) return 0;
    return 1;
}
void back(int k ,int t) {
    for (int i = 1; i <= n && !cnt; i++) {
        if (!uz[i]) {
            uz[i] = 1;
            st[k] = i;
            if (k == 1 || verificare(k)) {
                if (k==t)afis(k);
                else back(k + 1,t);
            }
            uz[i]=0;
        }
    }
}
int main() {
    cin >> n;
    for (int i = 1; i <=n; i++) cin >> s[i];
    for (int i = 1; i < n; i++)
        for (int j = i; j <= n; j++)
            if (strcmp(s[i], s[j]) > 0) swap(s[i], s[j]);
    for (int i = n; i >= 1; i--) {
        back(1,i);
        if (cnt) break;
    }
    return 0;
}