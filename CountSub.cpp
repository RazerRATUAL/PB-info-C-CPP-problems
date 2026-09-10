#include <fstream>
#include <vector>

using namespace std;

ifstream cin("countsub.in");
ofstream cout("countsub.out");
const int nm = 1001;
int n , St[nm] , Dr[nm] , val[nm] , T[nm] , k , x , cnt;

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

void RSD(int p){
    if(p > 0){
        cnt++;
        RSD(St[p]);
        RSD(Dr[p]);
    }
}