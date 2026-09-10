#include <fstream>
using namespace std;

ifstream cin("prime4.in");
ofstream cout("prime4.out");

bool is_prime(int x) {
    for(int i = 2; i < x;++i)
        if(x % i == 0) return 0;
    return 1;
}

int fr[1000];
int main(){
    int n, nr, MAX = 0;
    cin >>n;

    for(int i = 1; i <= n; i++){
        cin>> nr;
        if(is_prime(nr))
            fr[nr]++;
            MAX=max(fr[nr],MAX);
    }

    for(int i = 100; i <= 999; i++)
    if(fr[i] == MAX){
        cout << i; 
        break;
    }

return 0;
}