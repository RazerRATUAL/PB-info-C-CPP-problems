#include <iostream>
#include <algorithm>
using namespace std;

int v[11], p[11], s[11];
int n, cnt;

void afis(){
    for(int i = 1; i <= cnt; ++i)
        cout << v[i];
    cout << '\n';
}

void back(int poz){
    for(int i = 1; i <= cnt; ++i){
        if(!p[i] && (poz != 1 || s[i] != 0)) {
            v[poz] = s[i];
            p[i]= 1;
            if (poz ==cnt)
                afis();
            else back(poz + 1);
            p[i] = 0; // !
        }
    }     
}

int main()
{
    cin >> n;
    while(n != 0)
    {
        s[++cnt] = n % 10;
        n /= 10;
    }
    sort(s + 1 , s + cnt + 1);
    back(1);
}