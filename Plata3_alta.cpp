#include <iostream>
using namespace std;

int v[7], x[7];
int n, s;
bool plata = false;

void back(int poz, int sb);

int main(){
    cin >> n >> s;
    for(int i = 1; i <= n; ++i)
        cin >> v[i];

    back(1, 0);
    return 0;
} 

void back(int poz, int sb){
    for(int i = 0; i <= (s- sb) / v[poz] && !plata; ++i){
        x[poz] = i;
        sb += x[poz] * v[poz];
        if(sb <= s && poz <= n){
            if(poz == n && sb == s){
                for(int j = 1; j <= n; ++j)
                    cout << x[j] << " ";
                plata = true;
            }
            else if(poz < n)
                back(poz + 1, sb);
        }
        sb -= x[poz] * v[poz];
    }
}

