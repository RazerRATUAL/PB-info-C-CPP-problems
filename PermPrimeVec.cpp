#include <iostream>
using namespace std;
int v[11], p[11], s[11];
int n;
bool prim(int a){
    if(a == 1 || a== 0)
        return 0;
    if(a == 2)
        return 1;
    int nd = 0;
    for(int d = 3; d * d<= n; d++){
        if(n % d == 0) nd++;
    }
    if(nd == 0)
        return 1;
    else return 0;
}

void afis(){
    for(int i = 2; i <= n; ++i)
        if(prim(v[i])== 1 && prim(v[i - 1])== 1)
        return;
    
        

    for(int i = 1; i <= n; ++i)
        cout << v[i] << ' ';
    cout << '\n';
}

void back(int poz){
    for(int i = 1; i <= n; ++i){
        if(!p[i]) {
            v[poz] = s[i];
            p[i]= 1;
            if (poz ==n)
                afis();
            else back(poz + 1);
            p[i] = 0; // !
        }
    }     
}

int main(){
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> s[i];
    for(int i = 1; i < n; i++)
        for(int j = i + 1; j <= n; j++)
            if(s[i] > s[j])
                swap(s[i], s[j]);
    back(1);
}
