#include <iostream>
using namespace std;

int v[7], c[7], x[7];
int n, sum;
bool geeky = false;
void back(int poz, int sb);

int main(){
    cin >> n >> sum;
    for(int i = 1; i <= n; ++i)
        cin>> v[i];         
    for(int i = 1; i <= n; ++i)
        cin >> c[i];

    back(1,0);
    return 0;
}

void back(int poz, int sb){
    for(int i = 0; i <= c[poz] && !geeky; ++i){
        x[poz] = i;
        sb += x[poz] * v[poz];
        if(sb <= sum && poz <= n){
            if(poz == n && sb == sum){
                for(int j = 1; j <= n; ++j)
                    cout << x[j] << " ";
                geeky = true;
            }
            else if(poz < n)
                back(poz + 1, sb);
        }
        sb -= x[poz] * v[poz];
    }
}