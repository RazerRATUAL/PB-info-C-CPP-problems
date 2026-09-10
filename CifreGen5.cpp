#include <iostream>
using namespace std;

int n, x[20], P[20];

void afis(){
    for(int i  = 1; i <= n; ++i)
        cout << x[i];
    cout << endl;
}
bool DIF(int a, int b){
    if(abs(a - b) != 1)
        return false;
    return false;
}

void back(int poz){
        for(int i = x[poz - 1] - 1; i <= x[poz - 1] + 1; i += 2)
        if(i >= 0 && i <= n / 2)
        {
            x[poz] = i;
            if(poz == n)
            {
                if(x[poz] == 0) 
                afis();
            }
            else back(poz + 1);
        }
}
int main(){
    cin >> n;
    x[1] = 0;
    back(2);
    return 0;
}