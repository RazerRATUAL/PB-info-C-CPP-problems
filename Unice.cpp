#include <fstream>
using namespace std;

ifstream cin("maxcif.in");
ofstream cout("maxcif.out");

int fr[100];
int main(){
    int n, x, MIN = 100001;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> x;
        fr[x] += 1;
    }
        
    for(int i = 0; i <= 99; i++){
    if(fr[i] == 1)
        cout << i << ' ';    
    }
   
return 0;
}