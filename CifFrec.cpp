#include <fstream>
using namespace std;

int fr[10];
ifstream cin("ciffrecv.in");
ofstream cout("ciffrecv.out");

int main(){
    int n, MAX, nr_ap;
    while(cin>>n)
        if(n == 2 || n == 3 || n == 5 || n == 7)
            fr[n] += 1;

        for(int i = 7; i >= 2; i--)
        if(fr[i] != 0)
        {
            MAX = i;
            nr_ap = fr[i];
            break;
        }

    cout << MAX << " " << nr_ap;

return 0;
}