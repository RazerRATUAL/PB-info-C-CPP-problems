#include <fstream>
#include <vector>

using namespace std;

ifstream cin("countprimsub.in");
ofstream cout("countprimsub.out");

int n , St[1001] , Dr[1001] , val[1001] , T[1001] , k , x , cnt;

int prim(int n);

void RSD(int p);


 int main(){
    cin >> n;
    for(int i = 1 ; i <= n ; i++) {
        cin >> val[i] >> St[i] >> Dr[i];
        T[St[i]] = i;
        T[Dr[i]] = i;
    }

    cin >> k;
    for(int i = 1 ; i <= k ; i++){
        cin >> x;
        cnt = 0;
        RSD(x);
        cout << cnt << '\n';
    }

}

int prim(int n){
    if(n < 2) return 0;
    else if(n == 2) return 1;
    else if(n % 2 == 0) return 0;
    else for(int i = 3 ; i*i <= n ; i+= 2)
        if(n % i == 0) return 0;
    return 1;
}

void RSD(int p){
    if(p > 0){
        if(prim(val[p])) cnt++;
        RSD(St[p]);
        RSD(Dr[p]);
    }
}