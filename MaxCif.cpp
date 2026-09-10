#include <fstream>
using namespace std;

ifstream cin("maxcif.in");
ofstream cout("maxcif.out");

int fr[10];
int main(){
    int n, MAX = 0;
    while(cin>>n)
            fr[n] += 1;

    for(int i = 1; i <= 9; i++){
        if(fr[i] >= MAX)
        {
            MAX = fr[i];
        }
    }
        
    for(int i = 1; i <= 9; i++)
    if(fr[i] == MAX)
        cout << i << ' ';
return 0;
}